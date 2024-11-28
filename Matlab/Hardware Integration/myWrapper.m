% myWrapper.m

function [Fx, Fy, Fz, Tx, Ty, Tz] = myWrapper()
    % Open the connection to the sensor
    netFT_IP = '192.168.1.1';  % The IP address of the NetFT sensor
    port = 49152;  % The port for communication
    u = udpport("Datagram", "LocalPort", port);  % Create the UDP object

    % Configure the timeout (optional)
    u.Timeout = 10;  % Timeout in seconds for read/write operations

    % Wait for the connection to be established
    pause(1);  % Pause for a short time to ensure the connection is stable

    % Check if data is available
    if u.NumDatagramsAvailable > 0
        % Read the data from the sensor
        ftdata = netFT_test(u);  % Assuming netFT_test returns a 1x6 vector

        % Extract the force and torque components
        Fx = ftdata(1);  % Force in the X direction
        Fy = ftdata(2);  % Force in the Y direction
        Fz = ftdata(3);  % Force in the Z direction
        Tx = ftdata(4);  % Torque around the X axis
        Ty = ftdata(5);  % Torque around the Y axis
        Tz = ftdata(6);  % Torque around the Z axis
    else
        % If no data is available, return zeros
        Fx = 0;
        Fy = 0;
        Fz = 0;
        Tx = 0;
        Ty = 0;
        Tz = 0;
    end

    % Close the connection after reading the data
    clear u;
    
end
