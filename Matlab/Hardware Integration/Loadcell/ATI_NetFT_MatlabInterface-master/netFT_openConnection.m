function [ u ] = netFT_openConnection(  )
%Open and return a UDP connection to the Sensor

netFT = '192.168.1.1';
port = 49152;
%u = udpport(netFT,port);
%fopen(u);

u = udpport("Datagram");  
% Optional: Configure timeout or other settings as needed
u.Timeout = 10; % Timeout in seconds for read/write operations

end



% function [u, response] = netFT_openConnection()
%     % Open a UDP connection to the ATI Net F/T sensor and return a response
% 
%     netFT = '192.168.1.1'; % Sensor IP address
%     remotePort = 49152;     % Sensor communication port
% 
%     % Create UDP object and bind it to an available local port
%     u = udpport("Datagram");
% 
%     % Set the timeout for read and write operations (in seconds)
%     u.Timeout = 10; 
% 
%     try
%         % Open the connection to the sensor
%         disp('Opening connection to the sensor...');
% 
%         % Send a test command to the sensor (replace with actual command)
%         testCommand = uint8([0, 2, 0, 0, 0, 0, 0, 0]); % Example command
%         write(u, testCommand, "uint8", netFT, remotePort);
%         disp('Test command sent.');
% 
%         % Wait for a response (adjust based on expected response size)
%         pause(0.1); % Optional: wait for sensor to process the request
% 
%         % Check if any datagrams are available from the sensor
%         if u.NumDatagramsAvailable > 0
%             % Read the response (adjust the expected byte length)
%             response = read(u, 36, "uint8"); % Replace 36 with actual response length
%             disp('Received response:');
%             disp(response);
%         else
%             response = 'No response received from the sensor.';
%             disp(response);
%         end
%     catch ME
%         % Display error message if connection fails
%         disp('Error during UDP communication setup:');
%         disp(ME.message);
%         response = ME.message;
%     end
% end

