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
%% Deadzone
%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% 1) Thresholds and weights of DZ
rd=[-3 -2.75 -2.5 -2.25 -2 -1.75 -1.5 -1.25 -1 -0.75 -0.4 0 0.4 0.75 1 1.25 1.5 1.75 2 2.25 2.5 2.75 3];
d=length(rd);
gn=[-0.025,-0.041,-0.066,-0.106,-0.1715,-0.2705,-0.413,-0.5975,-0.7925,-1.1155,-1.1275];
gp=[-1.1275,-1.1155,-0.7925,-0.5975,-0.413,-0.2705,-0.1715,-0.106,-0.066,-0.041,-0.025];
g=[gn 4.7645 gp];

% 2) Deadzone operator
for z=1:1:length(rd)
    if rd(z)>0
        Ad(z,:)=max(v-rd(z),0);
    elseif rd(z)<0
        Ad(z,:)=min(v-rd(z),0);
    elseif rd(z)==0
        Ad(z,:)=v;
    end
end
% 3) The output of Deadzone Equation (42)
w=g*Ad;

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
        F_inc=w(k);
        F_dec=w(k);
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
plot(t,v,'b',t,w,'g',t,Y,'r','linewidth',2);
xlabel('Time $t$(second)','Interpreter','latex')
ylabel('Amplitude','Interpreter','latex')
legend({'$v(t)$','$w(t)$', ' $y(t)$'},'Interpreter','latex');
set(gca,'fontsize',18,'fontname','times new roman')

% 2) plot the deadzone playoperator
h2=figure;
set(h2,'WindowStyle','docked');
plot(v,Ad,'linewidth',2);
xlabel('Input $v$','Interpreter','latex')
ylabel('Deadzone Operator $\mathcal{S}_\rho[v]$','Interpreter','latex')
set(gca,'fontsize',18,'fontname','times new roman')

% 3) plot the Play operator
h3=figure;
set(h3,'WindowStyle','docked');
plot(v,Fr,'linewidth',2);
xlabel('Input $v$','Interpreter','latex')
ylabel('Play Operator $\Gamma_r[w]$','Interpreter','latex')
set(gca,'fontsize',18,'fontname','times new roman')
h4=figure;
set(h4,'WindowStyle','docked');
plot(w,Fr,'linewidth',2);
xlabel('Input $w$','Interpreter','latex')
ylabel('Play Operator $\Gamma_r[w]$','Interpreter','latex')
set(gca,'fontsize',18,'fontname','times new roman')

% 4) plot the Deadzone input-outpt
h5=figure;
set(h5,'WindowStyle','docked');
plot(v,w,'linewidth',2);
xlabel('Input $v$','Interpreter','latex')
ylabel('Output of Deadzone model $w$','Interpreter','latex')
set(gca,'fontsize',18,'fontname','times new roman')


% 5) plot the GPI input-output
h6=figure;
set(h6,'WindowStyle','docked');
plot(v,Y,'linewidth',2);
xlabel('Input $v$','Interpreter','latex')
ylabel('Output of GPI model $y$','Interpreter','latex')
set(gca,'fontsize',18,'fontname','times new roman')
