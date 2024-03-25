clc;
clear;


% force=data.Force;
% length=data.length;
% pressure=data.Pressure;
% 
% [xx, yy] = meshgrid(0:0.1:10, 0:1:250);
% vv = griddata(pressure, force, length, xx, yy, 'natural');
% 
% figure;
% mesh(xx,yy,vv)
% hold on;
% %plot3(pressure, force,length,'ro');
% grid on;
% xlabel('Pressure in Bars');
% ylabel('Force in Newtons');
% zlabel('Contraction length in mm');

p_1 = []
f1 = 9.8
l1=  (0.0667)*((p_1)^4)-(1.6339)*((p_1)^3)+(13.5)*((p_1)^2)-(36.42)*(p_1)+40.536

fsurf(l1)