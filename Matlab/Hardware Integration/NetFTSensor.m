classdef NetFTSensor < matlab.System
    % NetFTSensor reads data from the NetFT sensor via UDP
    
    properties
        % Define properties for connection settings
        SensorIP = '192.168.1.1';  % Sensor IP address
        Port = 49152;  % Communication port
    end
    
    properties (Access = private)
        % Private property to store the UDP connection object
        udpConnection
    end
    
    methods (Access = protected)
        function setupImpl(obj)
            % Set up the UDP connection
            obj.udpConnection = udpport("Datagram", "LocalPort", obj.Port);
            obj.udpConnection.Timeout = 10;  % Timeout for read operations
            pause(1);  % Wait for the connection to stabilize
        end
        
        function [Fx, Fy, Fz, Tx, Ty, Tz] = stepImpl(obj)
            % Read the data from the sensor
            if obj.udpConnection.NumDatagramsAvailable > 0
                % Read data if available
                ftdata = netFT_test(obj.udpConnection);  % Assuming this function is modified for object usage
                Fx = ftdata(1);
                Fy = ftdata(2);
                Fz = ftdata(3);
                Tx = ftdata(4);
                Ty = ftdata(5);
                Tz = ftdata(6);
            else
                % If no data available, return zeros
                Fx = 0;
                Fy = 0;
                Fz = 0;
                Tx = 0;
                Ty = 0;
                Tz = 0;
            end
        end
        
        function releaseImpl(obj)
            % Release the UDP connection
            fclose(obj.udpConnection);
            delete(obj.udpConnection);
        end
    end
end
