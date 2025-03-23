% Define model name
modelName = 'ROMmodel_C0_C3';
% Number of runs
numRuns = 5;

%Load the model
load_system(modelName);


% Get model workspace handle
mdlWorkspace = get_param(modelName, 'ModelWorkspace');

% Set the variable in the model workspace
assignin(mdlWorkspace, 'Left_EO', 43.23);
assignin(mdlWorkspace, 'Left_IO', 125.07);
assignin(mdlWorkspace, 'Left_LongThor', 0);
assignin(mdlWorkspace, 'Left_MF', 100.4);
assignin(mdlWorkspace, 'Left_Psoas', 40.74);
assignin(mdlWorkspace, 'Left_RA', 0);

assignin(mdlWorkspace, 'Right_EO', 43.23);
assignin(mdlWorkspace, 'Right_IO', 125.07);
assignin(mdlWorkspace, 'Right_LongThor', 0);
assignin(mdlWorkspace, 'Right_MF', 100.4);
assignin(mdlWorkspace, 'Right_Psoas', 40.74);
assignin(mdlWorkspace, 'Right_RA', 0);



% Disable Mechanics Explorer
set_param(modelName, 'SimMechanicsOpenEditorOnUpdate', 'off');

set_param(modelName, 'SimulationCommand', 'update');
sim(modelName);

% Initialize arrays to store compile and run times
compileTimes = zeros(1, numRuns);
runTimes = zeros(1, numRuns);

% Create a progress bar
h = waitbar(0, 'Initializing...');

% Loop for multiple runs
for i = 1:numRuns
    waitbar(i/numRuns, h, sprintf('Running simulation %d of %d...', i, numRuns));
    
    % Measure compile time
    tic;
    set_param(modelName, 'SimulationCommand', 'update');
    compileTimes(i) = toc;
    
    % Measure run time
    tic;
    sim(modelName);
    runTimes(i) = toc;
end

% Close the progress bar
close(h);

% Compute statistics
avgCompileTime = mean(compileTimes);
stdCompileTime = std(compileTimes);

avgRunTime = mean(runTimes);
stdRunTime = std(runTimes);

% Display results
fprintf('C3 Compile Time: Avg = %.2f sec, SD = %.2f sec\n', avgCompileTime, stdCompileTime);
fprintf('C3 Run Time: Avg = %.2f sec, SD = %.2f sec\n', avgRunTime, stdRunTime);

% Close the model without saving
close_system(modelName, 0);
