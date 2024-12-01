% function [ ftdata ] = netFT_getFreshData( u, ft_offset )
% %get the most recent force/torque data from the sensor and return after
% %offset compensation
% 
% flushinput(u)
% data = fscanf(u);
% ftdata = netFT_DataConversion(data)-ft_offset;
% end

function [ftdata] = netFT_getFreshData(u, ft_offset)
    % Get the most recent force/torque data from the sensor and return after
    % offset compensation.

    % Check if data is available
    if u.NumDatagramsAvailable > 0
        % Read the data from the sensor (adjust the number of bytes to read)
        data = read(u, 36, "uint8");  % Assuming 36 bytes, adjust as needed

        % Convert the raw data into usable force/torque data
        ftdata = netFT_DataConversion(data) - ft_offset;
    else
        ftdata = [];  % No data available
        disp('No data available from the sensor.');
    end
end
