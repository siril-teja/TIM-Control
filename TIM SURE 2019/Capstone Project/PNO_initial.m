clear all
clc

%for loop not necessary to read initial reference point for each sensor
table=cell2mat(fstclient('127.0.0.1',7234,0.1));

%Takes last row of table, as this is most recent values (x,y,z)
initialSensor1 = table(end,:)

%For four sensors: 
% initialSensor1 = table(end-3,:)
% initialSensor2 = table(end-2,:)
% initialSensor3 = table(end-1,:)    
% initialSensor4 = table(end,:)

initialSensor1 = double(initialSensor1);
save('PNO_initial_1.txt','initialSensor1','-ascii')
type('PNO_initial_1.txt')

%For four sensors:
% initialSensor2 = double(initialSensor2)
% save('PNO_initial_2.txt','initialSensor2','-ascii')
% type('PNO_initial_2.txt')
% initialSensor3 = double(initialSensor3)
% save('PNO_initial_3.txt','initialSensor3','-ascii')
% type('PNO_initial_3.txt')
% initialSensor4 = double(initialSensor4)
% save('PNO_initial_4.txt','initialSensor4','-ascii')
% type('PNO_initial_4.txt')    

