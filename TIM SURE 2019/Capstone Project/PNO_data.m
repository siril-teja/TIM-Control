clear all
clc
for i=1:1:100
%%cell2mat: Converts readings from fastrak to an array 
%%fstclient(host string name, port number, time of data collection (s))
table=cell2mat(fstclient('127.0.0.1',7234,0.1));

%Takes last row of table, as this is most recent values (x,y,z)
Sensor1 = table(end,:)

%For four sensors: 
% Sensor1 = table(end-3,:)
% Sensor2 = table(end-2,:)
% Sensor3 = table(end-1,:)    
% Sensor4 = table(end,:)

% % % InitialSensor1 = load('PNO_initial_1.txt')

Sensor1 = double(Sensor1);
save('PNO_data1.txt','Sensor1','-ascii')
type('PNO_data1.txt')

%For four sensors:
% Sensor2 = double(Sensor2)
% save('PNO_data2.txt','Sensor2','-ascii')
% type('PNO_data2.txt')
% Sensor3 = double(Sensor3)
% save('PNO_data3.txt','Sensor3','-ascii')
% type('PNO_data3.txt')
% Sensor4 = double(Sensor4)
% save('PNO_data4.txt','Sensor4','-ascii')
% type('PNO_data4.txt')

end