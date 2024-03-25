%%  Copyright (c) 2022,
%  All rights reserved.
%  Authors: Mohammad Al Janaideh (maljanaideh@mun.ca)
% Department of Mechanical Engineering, Memroial University of Newfoundland
%%  This code is for Example 1 in Letter paper 
%% "The Prandtl-Ishlinskii Hysteresis Model"
% (Fundamentals of the Model and its Inverse Compensator)

clc
clear
close all
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%                         PI Model
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Define the Input
A=4; %Amplitude of input
f=1; %Frequency
T=3/f; % three cycle
t=0:2e-5:T; %Time vector
v=A*sin(2*pi*f.*t); %Input 
N=length(v); %number of sample
%%%%%%%%%%%%%%%%%%%%%%%%
%% Thresholds and weights
n=7;  %number of thresholds
r=[0 0.45 0.9 1.35 1.8 2.25 2.7]; %thresholds
P=[0.72    0.6    0.48    0.36    0.24    0.12    0.012]; %weights
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
%% Play operator Calculation of r
Fr=zeros(n,N);
M=0; % initial condition of play operator
for j=1:1:n
    for k=2:1:N  
        Fr(j,1)= M; 
        F_inc=v(k);
        F_dec=v(k);
        A=F_inc-r(j);
        B=min(F_dec+r(j),Fr(j,k-1));
        Fr(j,k)=max(A,B); % Equation (1)
    end%% End sample
end %% End threshold loop
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
%% The output of PI model
y=P*Fr;  % Equation (21)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
%% Plot the results
% 1) plot the input v(t) and the output y(t) signals
h1=figure;
set(h1,'WindowStyle','docked');
plot(t,v,'b',t,y,'r','linewidth',2);
xlabel('Time $t$(second)','Interpreter','latex')
ylabel('Amplitude','Interpreter','latex')
legend({'Input $v(t)$','Output $y(t)$'},'Interpreter','latex');
set(gca,'fontsize',18,'fontname','times new roman')

% 2) plot the play operator vs input
h2=figure;
set(h2,'WindowStyle','docked');
plot(v,Fr,'linewidth',2);
xlabel('Input $v$','Interpreter','latex')
ylabel('Play Operator $\Gamma_r$','Interpreter','latex')
legend({'$r_1$','$r_2$','$r_3$','$r_4$','$r_5$','$r_6$','$r_7$'},'Interpreter','latex');
set(gca,'fontsize',18,'fontname','times new roman')

% 3) plot the hystersis loop based on PI-model
h3=figure;
set(h3,'WindowStyle','docked');
plot(v,y,'b','linewidth',2);
xlabel('Input $v$','Interpreter','latex')
ylabel('Output of PI model $y$','Interpreter','latex')
set(gca,'fontsize',18,'fontname','times new roman')

