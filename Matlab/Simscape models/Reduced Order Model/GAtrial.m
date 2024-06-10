function [optimizedParams, fval] = optimizeROMWithGA()
    % Define GA options
    gaOptions = optimoptions('ga', ...
        'PopulationSize', 100, ...
        'MaxGenerations', 1000, ...
        'CrossoverFraction', 0.8, ...
        'MutationFcn', @mutationadaptfeasible, ...
        'Display', 'iter');

    % Define the number of variables
    nvars = 5; % Number of parameters to optimize

    % Define lower and upper bounds for the parameters
    lb = [1, 1, 1, 1, 1];
    ub = [15, 15, 15, 15, 15];

    % Run the genetic algorithm
    [optimizedParams, fval] = ga(@myFitnessFunction, nvars, [], [], [], [], lb, ub, [], gaOptions);

    % Display the optimized parameters
    disp('Optimized Parameters:');
    disp(optimizedParams);
end

function cost = myFitnessFunction(params)
    % Load the Simulink model
    model = 'ROM_draft1';
    load_system(model);
    
    % Get the parameters from the model
    DesignVars = sdo.getParameterFromModel(model, {'E_IVD1', 'E_IVD3', 'E_IVD5', 'E_IVD2', 'E_IVD4'});
    
    % Set the parameters to the values provided by GA
    for i = 1:length(params)
        DesignVars(i).Value = params(i);
    end
    
    % Create a simulation test object
    Simulator = sdo.SimulationTest(model);
    Simulator.Parameters = DesignVars;
    
    % Simulate the model
    simOut = sim(Simulator);
    
    % Extract relevant signals
    try
        loggedData = simOut.get('logsout'); % Use 'logsout' to access the logging data
        Sig_Log = loggedData.getElement('Sig');
        Sig_1_Log = loggedData.getElement('Sig_1');
    catch
        error('Logged signals not found. Ensure the signals are logged in the model.');
    end
    
    % Evaluate the cost based on the simulation results
    targetValues = 0;  % Define your target values
    targetValues_1 = 0;  % Define your target values
    cost = sum((Sig_Log.Values.Data - targetValues).^2) + sum((Sig_1_Log.Values.Data - targetValues_1).^2);
end
