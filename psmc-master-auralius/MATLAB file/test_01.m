% Constant force is applied

close all;
clear all;
clc;

M = 1; 
B = 0.2;
F = 1;

x = 0; v = 0;

ts = 0.001;
t = 0:ts:1;

for k = 1 : length(t)
    [x, v] = mass_damper(ts, F, M, B, x, v);
    xk(k) = x;
    vk(k) = v;    
end

subplot(2,1,1)
plot(t, xk)
xlabel('time')
ylabel('x')
subplot(2,1,2)
plot(t, vk)
xlabel('time')
ylabel('x_{dot}')