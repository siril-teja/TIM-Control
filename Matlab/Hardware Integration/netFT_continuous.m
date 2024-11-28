% Test script for NetFT sensor connectivity

%% UDP port
u = netFT_openConnection;
%% Parameters
numOffsetSamples = 20;
offset = netFT_getOffset(u, numOffsetSamples);

% Prepare figure for real-time plotting
figure;
hold on;
xlabel('Time (iterations)');
ylabel('Force/Torque (N and Nm)');
legend('Fx', 'Fy', 'Fz', 'Tx', 'Ty', 'Tz');

% Initialize the data arrays
result = zeros(1, 6);  % Store latest data point for plotting

% Loop to continuously fetch data
while true
    % Fetch fresh data from the sensor
    ftdata = netFT_getFreshData(u, offset);
    
    % Display data (optional)
    disp(ftdata);
    
    % Update the result (you can store or process more if needed)
    result = [result; ftdata];  % Append the new data point
    
    % Plot the data in real-time
    plot(result(:,1), 'r'); % Fx - red
    plot(result(:,2), 'g'); % Fy - green
    plot(result(:,3), 'b'); % Fz - blue
    plot(result(:,4), 'c'); % Tx - cyan
    plot(result(:,5), 'm'); % Ty - magenta
    plot(result(:,6), 'k'); % Tz - black
    drawnow;  % Force MATLAB to update the figure
    
    % Add a pause to avoid overwhelming the CPU
    pause(0.1);  % Adjust the pause time if needed
end

% This part will only execute when you manually stop the loop
netFT_stopStreaming(u);
%% Tidy up
clear u;
