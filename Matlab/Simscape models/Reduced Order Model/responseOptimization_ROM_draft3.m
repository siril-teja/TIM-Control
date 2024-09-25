function [All_Optimized_DesignVars, All_Info] = responseOptimization_ROM_draft3(DesignVars)
% RESPONSEOPTIMIZATION_ROM_DRAFT3
%
% Run design optimization for multiple values of FollowerLoad.

%% Open the model.
mdl = 'ROM_draft3';
open_system(mdl)

%% Define FollowerLoad values to iterate over
FollowerLoad_values = [0, 250, 500, 750, 1000]; % The load values for the optimization

% Initialize storage for the optimized results and information
All_Optimized_DesignVars = cell(length(FollowerLoad_values), 1);
All_Info = cell(length(FollowerLoad_values), 1);

%% Loop over FollowerLoad values
for i = 1:length(FollowerLoad_values)
    FollowerLoad = FollowerLoad_values(i); % Current FollowerLoad
    
    % Update FollowerLoad in the model workspace
    setVariableInModelWorkspace(mdl, 'FollowerLoad', FollowerLoad);
    
    % Specify Design Variables
    if nargin < 1 || isempty(DesignVars)
        DesignVars = sdo.getParameterFromModel(mdl,{'E_IVD1','E_IVD2','E_IVD3','E_IVD4','E_IVD5'});
        for idx = 1:length(DesignVars)
            DesignVars(idx).Minimum = 0.5;
            DesignVars(idx).Maximum = 10;
            DesignVars(idx).Scale = 1;
        end
    end
    
    %% Specify Design Requirements
    Requirements = struct;
    bnds = getbounds([mdl '/L1-L2 RMSE']);
    Requirements.SignalTracking = bnds{1};
    bnds = getbounds([mdl '/L2-L3 RMSE']);
    Requirements.SignalTracking_1 = bnds{1};
    bnds = getbounds([mdl '/L3-L4 RMSE']);
    Requirements.SignalTracking_2 = bnds{1};
    bnds = getbounds([mdl '/L4-L5 RMSE']);
    Requirements.SignalTracking_3 = bnds{1};
    bnds = getbounds([mdl '/L5-S1 RMSE']);
    Requirements.SignalTracking_4 = bnds{1};

    % Prevent check block assertions during optimization.
    CheckBlockStatus = sdo.setCheckBlockEnabled(mdl,'off');
    
    %% Simulation Definition
    Simulator = sdo.SimulationTest(mdl);
    
    % Define signal logging information
    SignalNames = {'L1-L2 RMSE', 'L2-L3 RMSE', 'L3-L4 RMSE', 'L4-L5 RMSE', 'L5-S1 RMSE'};
    
    for j = 1:length(SignalNames)
        Simulator.LoggingInfo.Signals(j) = Simulink.SimulationData.SignalLoggingInfo;
        Simulator.LoggingInfo.Signals(j).BlockPath = [mdl '/' SignalNames{j}];
        Simulator.LoggingInfo.Signals(j).SignalName = 'RMSE';
    end
    
    %% Create Optimization Objective Function
    optimfcn = @(P) ROM_draft3_optFcn(P, Simulator, Requirements);
    
    %% Optimization Options
    Options = sdo.OptimizeOptions;
    Options.OptimizedModel = Simulator;
    
    %% Optimize the Design
    [Optimized_DesignVars, Info] = sdo.optimize(optimfcn, DesignVars, Options);
    
    % Store results for this FollowerLoad value
    All_Optimized_DesignVars{i} = Optimized_DesignVars;
    All_Info{i} = Info;
    
    % Restore check block assertions.
    sdo.setCheckBlockEnabled(mdl, CheckBlockStatus);
    
    %% Update the model with the optimized parameter values (optional)
    sdo.setValueInModel(mdl, Optimized_DesignVars);
end
end

%% Optimization objective function
function Vals = ROM_draft3_optFcn(P, Simulator, Requirements)
% ROM_DRAFT3_OPTFCN
%
% Function to evaluate the design requirements.

%% Model Evaluation
Simulator.Parameters = P;
simOut = sim(Simulator);

% Retrieve logged signal data
LoggedSignals = simOut.LoggedSignals;

% Evaluate the design requirements.
F_SignalTracking = evalRequirement(Requirements.SignalTracking, LoggedSignals.RMSE_1.Data);
F_SignalTracking_1 = evalRequirement(Requirements.SignalTracking_1, LoggedSignals.RMSE_2.Data);
F_SignalTracking_2 = evalRequirement(Requirements.SignalTracking_2, LoggedSignals.RMSE_3.Data);
F_SignalTracking_3 = evalRequirement(Requirements.SignalTracking_3, LoggedSignals.RMSE_4.Data);
F_SignalTracking_4 = evalRequirement(Requirements.SignalTracking_4, LoggedSignals.RMSE_5.Data);

%% Return Values.
Vals.F = F_SignalTracking + F_SignalTracking_1 + F_SignalTracking_2 + F_SignalTracking_3 + F_SignalTracking_4;
end

%% Helper function to set variable in model workspace
function setVariableInModelWorkspace(modelName, variableName, value)
    modelWorkspace = get_param(modelName, 'ModelWorkspace');
    modelWorkspace.assignin(variableName, value);
end