close all;
clear all;
clc;

% The system
M = 1; 
B = 0.2;
x = 0; v = 0;

% Simulation time and time sampling
ts = 0.001;
t = 0:ts:50;

% Desired trajectory
% Step input
%rd = zeros(1, length(t)) + 1;
% Sinusoid
rd = 0.01 * sin(2 * pi * 0.1 * t);

% PSMC
F = 5;
lambda = 0.5;
Kp = 100;
Ki = 0;
Kd = 10;

a_prev = 0;
a_prev_prev = 0;

for k = 1 : length(t)
    if k > 2
        rd_prev = rd(k-1);
    else
        rd_prev = 0;
    end
    
    rd_dot(k) = (rd(k) - rd_prev) / ts;
    [f, a] = psmc(ts, Kp, Ki, Kd, F, lambda, rd(k), rd_dot(k), x, v, a_prev, a_prev_prev);
    
    a_prev = a;
    a_prev_prev = a_prev;
    
    [x, v] = mass_damper(ts, f, M, B, x, v);
    xk(k) = x;
    vk(k) = v;    
end

subplot(2,1,1)
hold on;
plot(t, xk, 'r')   % actual
plot(t, rd, 'b--') % desired
xlabel('time')
ylabel('x')
legend('Actual', 'Desired')

subplot(2,1,2)
hold on;
plot(t, vk, 'r')       % actual
plot(t, rd_dot, 'b--') % desired
xlabel('time')
ylabel('x_{dot}')
legend('Actual', 'Desired')