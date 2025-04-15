% Test script for NetFT sensor connnctivity

%% udp port
u = netFT_openConnection;
%% parameters
numIterations = 1000;
numOffsetSamples = 20;
%% start streaming
netFT_startStreaming(u);
%% offset
offset = netFT_getOffset(u, numOffsetSamples);

result=zeros(numIterations,6);
%% loop
for i = 1:numIterations
    ftdata = netFT_getFreshData(u, offset);
    display(ftdata);
    result(i,:)=ftdata;
end

netFT_stopStreaming(u);
%% plot data
%plot(result(:,:));

%% plot data
figure;

% Force subplot
subplot(2,1,1);
plot(result(:,1), 'r'); hold on;
plot(result(:,2), 'g');
plot(result(:,3), 'b');
legend('Fx', 'Fy', 'Fz');
xlabel('Sample #');
ylabel('Force (N)');
title('NetFT Load Cell - Force');
grid on;

% Torque subplot
subplot(2,1,2);
plot(result(:,4), 'c'); hold on;
plot(result(:,5), 'm');
plot(result(:,6), 'k');
legend('Tx', 'Ty', 'Tz');
xlabel('Sample #');
ylabel('Torque (Nmm)');
title('NetFT Load Cell - Torque');
grid on;



%% tidy up

%delete(u);
clear u