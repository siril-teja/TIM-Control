%%  Copyright (c) 2022,
%  All rights reserved.
%  Authors: Mohammad Al Janaideh (maljanaideh@mun.ca)
% Department of Mechanical Engineering, Memroial University of Newfoundland
%%  This code is for Example 4 in Letter paper 
%% "The Prandtl-Ishlinskii Hysteresis Model"
% (Fundamentals of the Model and its Inverse Compensator)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%                         Generalized PI Model
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clc
clear
close all
%%%%%%%%%%%%%%%%%%%%%%%%
%% GPI Model
%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Define the Input
A=5; %Amplitude of input
f=1; %Frequency
T=3/f; %three cycle
t=0:T/10000:T; %Time vector
v=A*sin(2*pi*f.*t); %Input
N=length(v); %number of sample
%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% tanh enevelope function
%%%%%%%%%%%%%%%%%%%%%%%%%%%%
a0=6;a1=0.4;a2=0;a3=0;
b0=6;b1=0.4;b2=0;b3=0;
for k=2:1:N
    if v(k)>=v(k-1)
        h(k)=a0*tanh(a1*v(k)+a2)+a3;
    else
        h(k)=b0*tanh(b1*v(k)+b2)+b3;
    end
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% PI
%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% 1) Define thresholds and weights of PI
n=7;  %number of thresholds
a=0.45;
b=0.65;
c=7.75e-4;

for j=1:1:n  %This loop is to define the threshold and the density function
    r(j)=a*(j-1); 
    P(j)=b*exp(-c*r(j)); 
end

% 2) Play operator of r
Fr=zeros(n,N);
for j=1:1:n
        Fr(j,1)= 0;  % the initial value
      for k=2:1:N   % these loops to find PI model
        %% Pi Operator
        F_inc=h(k);
        F_dec=h(k);
        % Calculate the play operator
        A=F_inc-r(j);
        B=min(F_dec+r(j),Fr(j,k-1));
        Fr(j,k)=max(A,B);
      end%% End sample
end %% End threshold loop
% 3) The Output of the PI Model
Y=P*Fr; % Equation (41)
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
%% Plot the results
% 1) plot the v(t), w(t) and the output y(t) signals
h1=figure;
set(h1,'WindowStyle','docked');
plot(t,v,'b',t,h,'g',t,Y,'r','linewidth',2);
xlabel('Time $t$(second)','Interpreter','latex')
ylabel('Amplitude','Interpreter','latex')
legend({'$v(t)$','$w(t)$', ' $y(t)$'},'Interpreter','latex');
set(gca,'fontsize',18,'fontname','times new roman')

% 2) plot the Play operator
h2=figure;
set(h2,'WindowStyle','docked');
plot(v,Fr,'linewidth',2);
xlabel('Input $v$','Interpreter','latex')
ylabel('Play Operator $\Gamma_r[h]$','Interpreter','latex')
set(gca,'fontsize',18,'fontname','times new roman')

% 3) plot the tanh input-outpt
h4=figure;
set(h4,'WindowStyle','docked');
plot(v,h,'linewidth',2);
xlabel('Input $v$','Interpreter','latex')
ylabel('Output of Deadzone model $w$','Interpreter','latex')
set(gca,'fontsize',18,'fontname','times new roman')

% 5) plot the GPI input-output
h5=figure;
set(h5,'WindowStyle','docked');
plot(v,Y,'linewidth',2);
xlabel('Input $v$','Interpreter','latex')
ylabel('Output of GPI model $y$','Interpreter','latex')
set(gca,'fontsize',18,'fontname','times new roman')