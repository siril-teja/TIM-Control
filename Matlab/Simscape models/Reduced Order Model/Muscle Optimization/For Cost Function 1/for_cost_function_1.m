
function results = for_cost_function_1()
% Automated optimization with different initial values for all design variables

%% Open the model
open_system('ROM_draft3');

%% Define Different Initial Values
initial_values = [0, 50, 100, 150, 200, 250]; % Values to test
%initial_values = [0]; 
%% Specify Design Variables Manually (Instead of Loading a Session)
DesignVars = sdo.getParameterFromModel('ROM_draft3', ...
    {'Left_EO', 'Left_IO', 'Left_LongThor', 'Left_MF', 'Left_Psoas', 'Left_RA'});

% Set min/max constraints
for j = 1:length(DesignVars)
    DesignVars(j).Minimum = 0;
    DesignVars(j).Maximum = 250;
end

% Store results
results = struct();


optimization_data = struct();
optimization_data.Cost1 = [];
optimization_data.X = [];
optimization_data.Y = [];
optimization_data.InitialDesignVars = [];  % Store initial design variables for each run
optimization_data.U = []; 


   % Define 6 colors for different initial conditions
    colors = lines(6); % MATLAB's built-in colormap (or use jet, parula, etc.)
    scatterPlots = gobjects(1, 6); % Array to store scatter plots for each dataset
    closestPoints = gobjects(1, 6); % Array to store closest point markers
    
    hFig = figure; % Store the figure handle
    hold on;
    xlabel('U = max(|X|, |Y|)');
    ylabel('Sum of Cubes of Forces x 10E6');
    title('Optimization Progress');
    grid on;

    % Initialize scatter plots for each initial condition
    for j = 1:6
        scatterPlots(j) = scatter([], [], 36, colors(j, :), 'filled'); % Size 36, filled
        closestPoints(j) = scatter([], [], 100, colors(j, :), 'x', 'LineWidth', 2); % Larger X marker
    end

    legend({'0', '0 - best', '50', '50 - best', '100', '100 - best', ...
     '150', '150 - best', '200', '200 - best', '250', '250 - best'}, 'Location', 'best');

    hold on;




% Loop over each initial value
for i = 1:length(initial_values)
    fprintf('Running Optimization %d with Initial Value = %d for all variables\n', i, initial_values(i));


     % Store initial design variables before optimization
    initial_design_vars = DesignVars;



    % Set all design variables to the current initial value
    for j = 1:length(DesignVars)
        DesignVars(j).Value = initial_values(i);
    end

    %% Specify Design Requirements
    Requirements = struct;
    bnds = getbounds('ROM_draft3/Muscle Forces/Minimize SumofCubeofForces');
    Requirements.SignalTracking = bnds{1};
    bnds = getbounds('ROM_draft3/Plumbline - Check X Bounds');
    bnds = [bnds{:}];
    Requirements.SignalBound = bnds(1);
    Requirements.SignalBound_1 = bnds(2);
    bnds = getbounds('ROM_draft3/Plumbline - Check Y Bounds');
    bnds = [bnds{:}];
    Requirements.SignalBound_2 = bnds(1);
    Requirements.SignalBound_3 = bnds(2);

    % Disable check block assertions during optimization
    CheckBlockStatus = sdo.setCheckBlockEnabled('ROM_draft3', 'off');

    %% Simulation Setup
    Simulator = sdo.SimulationTest('ROM_draft3');

    Sig_Info = Simulink.SimulationData.SignalLoggingInfo;
    Sig_Info.BlockPath = 'ROM_draft3/Muscle Forces/Minimize SumofCubeofForces/u';
    Sig_Info.LoggingInfo.LoggingName = 'Sig-Cost1';
    Sig_Info.LoggingInfo.NameMode = 1;

    Sig_1_Info = Simulink.SimulationData.SignalLoggingInfo;
    Sig_1_Info.BlockPath = 'ROM_draft3/Plumbline - Check X Bounds/u';
    Sig_1_Info.LoggingInfo.LoggingName = 'Sig-X';
    Sig_1_Info.LoggingInfo.NameMode = 1;

    Sig_2_Info = Simulink.SimulationData.SignalLoggingInfo;
    Sig_2_Info.BlockPath = 'ROM_draft3/Plumbline - Check Y Bounds/u';
    Sig_2_Info.LoggingInfo.LoggingName = 'Sig-Y';
    Sig_2_Info.LoggingInfo.NameMode = 1;

    Simulator.LoggingInfo.Signals = [...
    Sig_Info; ...
    Sig_1_Info; ...
    Sig_2_Info];

    %%



    % Enable fast restart
    Simulator = fastRestart(Simulator, 'on');

    % Turn off mechanics visualization
    set_param('ROM_draft3', 'SimMechanicsOpenEditorOnUpdate', 'off');




    % Print table header before the loop
    fprintf('%-15s%-10s%-10s%-10s%-10s\n', 'Initial Value', 'Cost1', 'X', 'Y', 'U');
    fprintf('%s\n', repmat('-', 1, 55)); % Print a separator line


    %% Define Optimization Objective Function
    optimfcn = @(P) ROM_draft3_optFcn(P, Simulator, Requirements);

    %% Optimization Options
    Options = sdo.OptimizeOptions;
    
    %Options.MethodOptions.Algorithm = 'interior-point';
    %Options.MethodOptions.MaxIterations = 2 ;
    
    Options.Method = 'surrogateopt';
    Options.MethodOptions.MaxFunctionEvaluations = 100;
    Options.MethodOptions.ObjectiveLimit = 0.001;
    
    
    Options.OptimizedModel = Simulator;

    %% Run Optimization
    [Optimized_DesignVars, Info] = sdo.optimize(optimfcn, DesignVars, Options);

    % Disable fast restart
    Simulator = fastRestart(Simulator, 'off');

    % Restore check block assertions
    sdo.setCheckBlockEnabled('ROM_draft3', CheckBlockStatus);

    %% Store Results
    results(i).InitialValue = initial_values(i);
    results(i).Optimized_DesignVars = Optimized_DesignVars;
    results(i).Info = Info;

    % Update the model with optimized parameters
    sdo.setValueInModel('ROM_draft3', Optimized_DesignVars);
end

function Vals = ROM_draft3_optFcn(P,Simulator,Requirements)
%ROM_DRAFT3_OPTFCN
%
% Function called at each iteration of the optimization problem.
%
% The function is called with a set of parameter values, P, and returns
% the objective value and constraint violations, Vals, to the optimization
% solver.
%
% See the sdoExampleCostFunction function and sdo.optimize for a more
% detailed description of the function signature.
%

%% Model Evaluation

% Simulate the model.
Simulator.Parameters = P;
Simulator = sim(Simulator, 'Timeout', 300);

% Retrieve logged signal data.
SimLog = find(Simulator.LoggedData,get_param('ROM_draft3','SignalLoggingName'));
Sig_Log = find(SimLog,'Sig-Cost1');
Sig_1_Log = find(SimLog,'Sig-X');
Sig_2_Log = find(SimLog,'Sig-Y');

Cost1 = Sig_Log.Values.Data(end);
X = Sig_1_Log.Values.Data(end);
Y = Sig_2_Log.Values.Data(end);
U = max(abs(X), abs(Y));

 % Save the values into the structure
 optimization_data.Cost1 = [optimization_data.Cost1; Cost1];
 optimization_data.X = [optimization_data.X; X];
 optimization_data.Y = [optimization_data.Y; Y];
 optimization_data.U = [optimization_data.U; U];

 % Store the initial and optimized design variables in each run
 %optimization_data.InitialDesignVars{i} = initial_design_vars;
 %optimization_data.OptimizedDesignVars{i} = Optimized_DesignVars;
 optimization_data.InitialDesignVars = [optimization_data.InitialDesignVars; initial_values(1)];

 


% Inside the loop, print the values
%fprintf('%-15d%-10.4f%-10.4f%-10.4f%-10.4f\n', initial_values(i), Cost1, X, Y, U);


% Identify which dataset this point belongs to (assuming 6 different initial conditions)
dataset_index = mod(i - 1, 6) + 1; % Ensures indices range from 1 to 6

% **Update existing scatter plot instead of creating a new one**
scatterPlots(dataset_index).XData = [scatterPlots(dataset_index).XData, U];
scatterPlots(dataset_index).YData = [scatterPlots(dataset_index).YData, Cost1];

% Find the closest point to the origin
distances = sqrt(scatterPlots(dataset_index).XData.^2 + scatterPlots(dataset_index).YData.^2);
[~, min_idx] = min(distances);

% Update closest point marker dynamically
closestPoints(dataset_index).XData = scatterPlots(dataset_index).XData(min_idx);
closestPoints(dataset_index).YData = scatterPlots(dataset_index).YData(min_idx);

drawnow; % Refresh the figure dynamically


% Evaluate the design requirements.
F_SignalTracking = evalRequirement(Requirements.SignalTracking,Sig_Log.Values);
Cleq_SignalBound = evalRequirement(Requirements.SignalBound,Sig_1_Log.Values);
Cleq_SignalBound_1 = evalRequirement(Requirements.SignalBound_1,Sig_1_Log.Values);
Cleq_SignalBound_2 = evalRequirement(Requirements.SignalBound_2,Sig_2_Log.Values);
Cleq_SignalBound_3 = evalRequirement(Requirements.SignalBound_3,Sig_2_Log.Values);

%% Return Values.
%
% Collect the evaluated design requirement values in a structure to
% return to the optimization solver.
Vals.F = F_SignalTracking;
Vals.Cleq = [...
    Cleq_SignalBound(:); ...
    Cleq_SignalBound_1(:); ...
    Cleq_SignalBound_2(:); ...
    Cleq_SignalBound_3(:)];
end

% Save the accumulated optimization data at the end of the loop
save('optim_data_L1-S1_MuscleForces.mat', 'optimization_data');

savefig(hFig, 'optim_progress_L1-S1_MuscleForces.fig');

save('optim_variables_L1-S1_MuscleForces.mat', 'results');

fprintf('Optimization runs completed and saved.\n');

end


