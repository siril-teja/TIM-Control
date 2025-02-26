function retrieve_cost_and_U()
    % Load previously optimized results
    load('L1-S1-only-With-Cost1.mat', 'results');

    % Open the Simulink model
    open_system('ROM_draft3');

    % Preallocate storage for results
    costFunctionValues = zeros(1, length(results));
    U_values = zeros(1, length(results));

    % Loop through each optimized parameter set
    for i = 1:length(results)
        fprintf('Running Simulink model for Run %d (Initial Value = %d)\n', ...
                i, results(i).InitialValue);

        % Apply optimized parameters to the Simulink model
        sdo.setValueInModel('ROM_draft3', results(i).Optimized_DesignVars);

        % Run the Simulink model
        simOut = sim('ROM_draft3');
        
        logsout = simOut.logsout;

        % Try retrieving Cost1 and U safely
        try
            Cost1 = logsout{2}.Values.Data(end);
            U = logsout{1}.Values.Data(end);
        catch
            Cost1 = NaN;
            U = NaN;
            warning('Could not retrieve Cost1 or U for run %d', i);
        end

        % Store results
        costFunctionValues(i) = Cost1;
        U_values(i) = U;

        fprintf('Run %d: Cost Function = %.4f, U = %.4f\n', i, Cost1, U);
    end

    % Save updated results
    save('updated_optimization_results.mat', 'results', 'costFunctionValues', 'U_values');

    fprintf('All model runs completed and values saved.\n');
end


%% 

