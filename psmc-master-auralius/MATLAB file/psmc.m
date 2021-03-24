function [f, a] = psmc(T, Kp, Ki, Kd, F, lambda, rd, rd_dot, r, r_dot, a_prev, a_prev_prev)
% T is the sampling period
% Kp, Ki, Kd are the PID-type virtual coupling parameters
% F is the actuator force magnitude limit
% lambsa is the time constant

sigma = (rd - r) + lambda * (rd_dot - r_dot);
delta_a_prev = (a_prev - a_prev_prev) ;
f_star = (Kd + Kp*T+Ki*T*T)  / (lambda + T) * sigma + Ki*a_prev + (Kp*lambda +Ki*T*lambda-Kd)  / (lambda * T + T*T) * delta_a_prev;
n= f_star / F;
if (abs(n) > 1)
    f = F*sign(n);
else
    f = n;
end

a = 1 / (Kd + Kp*T + Ki*T*T) * ((Kd + Kp*T) * a_prev + Kd*delta_a_prev + T*T*f );
