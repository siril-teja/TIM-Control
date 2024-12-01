% function [ ft_offset ] = netFT_getOffset( u, numOffsetSamples )
% %get offsets and return as 1x6 vector
% 
% ft_offset = zeros(1,6);
% for i = 1:numOffsetSamples
%     ft_offset = ft_offset + netFT_getFreshData(u,0)/numOffsetSamples;
% end
% end

function [ft_offset] = netFT_getOffset(u, numOffsetSamples)
    % Get offsets and return as a 1x6 vector

    % Initialize the offset as a zero vector
    ft_offset = zeros(1, 6);

    % Accumulate the force/torque data for the specified number of samples
    for i = 1:numOffsetSamples
        % Get fresh data from the sensor
        data = netFT_getFreshData(u, 0);
        
        % Check if data is valid (i.e., not empty)
        if ~isempty(data)
            ft_offset = ft_offset + data / numOffsetSamples;
        else
            disp('No data received for sample, skipping...');
        end
    end
end
