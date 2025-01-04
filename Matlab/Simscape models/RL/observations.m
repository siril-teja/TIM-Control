% Define observation space: x and y deviations
obsInfo = rlNumericSpec([2 1], ...
    'LowerLimit', [-inf; -inf], ...
    'UpperLimit', [ inf;  inf]);
obsInfo.Name = 'x and y deviations';

% Define action space: muscle forces
numMuscles = 8; % Replace with the actual number of muscle inputs
actInfo = rlNumericSpec([numMuscles 1], ...
    'LowerLimit', zeros(numMuscles, 1), ... % Replace with min force values
    'UpperLimit', ones(numMuscles, 1) * 500); % Replace with max force values
actInfo.Name = 'muscle forces';
