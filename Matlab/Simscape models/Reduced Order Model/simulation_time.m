% Define model name
modelName = 'ROM_draft3';

% Load the model
load_system(modelName);

% Disable Mechanics Explorer
set_param(modelName, 'SimMechanicsOpenEditorOnUpdate', 'off');

% Number of runs
numRuns = 5;

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
fprintf('Compile Time: Avg = %.2f sec, SD = %.2f sec\n', avgCompileTime, stdCompileTime);
fprintf('Run Time: Avg = %.2f sec, SD = %.2f sec\n', avgRunTime, stdRunTime);

% Close the model without saving
%close_system(modelName, 0);
