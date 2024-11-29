% Test script for continuous NetFT sensor connectivity

%% UDP Port
u = netFT_openConnection;

%% Parameters
numOffsetSamples = 20;

%% Start Streaming
netFT_startStreaming(u);

%% Offset Calculation
offset = netFT_getOffset(u, numOffsetSamples);

%% Initialize variables
result = zeros(0, 6); % Dynamic array to store sensor data
timeData = zeros(0, 1); % Store timestamps
startTime = tic; % Start timer for timestamps

% Create a figure for live plotting
figure;
hold on;
grid on;
xlabel('Time (s)');
ylabel('Force/Torque Values');
legendLabels = {'Fx', 'Fy', 'Fz', 'Tx', 'Ty', 'Tz'};

% Initialize plot handles for six data channels
plotHandles = gobjects(1, 6);
colors = lines(6); % Different colors for each channel
for i = 1:6
    plotHandles(i) = plot(nan, nan, 'LineWidth', 1.5, 'Color', colors(i, :));
end

legend(plotHandles, legendLabels, 'Location', 'best');

%% Continuous Loop for Data Collection
disp('Press Ctrl+C to stop data collection...');
try
    while true
        % Fetch sensor data
        ftdata = netFT_getFreshData(u, offset);
        
        % Validate the data
        if isempty(ftdata) || length(ftdata) ~= 6
            warning('Unexpected data format or empty data received.');
            continue;
        end

        % Append the new data
        elapsedTime = toc(startTime);
        timeData = [timeData; elapsedTime];
        result = [result; ftdata];
        
        % Limit the number of displayed points for performance
        maxPoints = 1000; % Adjust as needed
        if size(result, 1) > maxPoints
            result = result(end-maxPoints+1:end, :);
            timeData = timeData(end-maxPoints+1:end);
        end

        % Update plots
        for j = 1:6
            set(plotHandles(j), 'XData', timeData, 'YData', result(:, j));
        end

        % Redraw the figure
        drawnow;
    end
catch ME
    disp('Data collection stopped.');
    disp(ME.message);
end

%% Stop Streaming
netFT_stopStreaming(u);

%% Tidy Up
clear u; % Clear the UDP object
