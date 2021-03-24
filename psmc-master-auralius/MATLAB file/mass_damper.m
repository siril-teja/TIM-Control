function [x, v] = mass_damper(ts, F, M, B, x0, v0)
% A system defined by a mass M and a damper B. Force F is applied to the
% system. The current state of the system is x0 and y0. We will now
% calculate the next state of the system.

acc = (F - B * v0) / M;
v = v0 + acc * ts;
x = x0 + v * ts;

end