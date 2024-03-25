function Generate_MotData_C

% Adila Quesadilla Papayaﬂ
% Last Updated: November 5th 2010 
% 
% This function generates a sinusoidal shaped motion file to be used as an input motion file by
% OpenSim for the purpose of running the various toolboxes.

% References:
% (1) M. Christophy. A detailed open-source musculoskeletal model of the human lumbar spine. Master?s 
%     thesis, University of California at Berkeley, 2010. 
% (2) M. Christophy, N. A. Faruk Senan, O. O?Reilly, and J. Lotz. A musculoskeletal model for the lumbar 
%     spine. Biomechanics and Modeling in Mechanobiology, 2010. To be published. 

%This function generates a .mot or a .sto file to be used with the OpenSim
%toolboxes
steps = 100; T_o = 0; T_f = 1;
Time = linspace(T_o,T_f,steps)';
NumCoords = 3;

optionType = 1; %Set this to 1 for a .mot output file, or 2 for a .sto output file.
optionVel=0; %set to 1 if we want that data included, else set to 0




% Coordinates take on a sinusoidal profile according to
% y = A*sin(k*(t-T_o)) + c where A = amplitude, k = 2pi/period, 
% c = displaced height. 
% Modify these values as appropriate
k = 2*pi/(T_f-T_o); c = 0; A = 10; %
 
% The DOFs are
% flex_extension lat_bending	axial_rotation		
% with velocities
% flex_extension_u	lat_bending_u	axial_rotation_u

% Uncomment the DOF that you're interested in generating the motion file for. 

%% FLEXION EXTENSION %%
axial_rotation = 0*Time; lat_bending = 0*Time; axial_rotation_u = 0*Time; lat_bending_u = 0*Time;
flex_extension = A*(sin(k*Time-k*T_o));
flex_extension_u = k*A*cos(k*Time);

% %% LATERAL BENDING %%
% axial_rotation = 0*Time; flex_extension = 0*Time; axial_rotation_u = 0*Time; flex_extension_u = 0*Time;
% lat_bending = A*(sin(k*Time-k*T_o));
% lat_bending_u = k*A*cos(k*Time);

% %% AXIAL ROTATION %%
% flex_extension = 0*Time; lat_bending = 0*Time; flex_extension_u = 0*Time; lat_bending_u = 0*Time;
% axial_rotation = A*(sin(k*Time-k*T_o));
% axial_rotation_u = k*A*cos(k*Time);


Data_Rot = [flex_extension lat_bending axial_rotation];
Data_Rot_Vel = [flex_extension_u lat_bending_u axial_rotation_u];
range = [Time(1) Time(end)];

Data = [Time Data_Rot Data_Rot_Vel]
S = size(Data); % gives (# of time steps = # of rows, # of data columns)  
nRows=S(1);

% if you want the joint positions only
if (optionVel==0)
JointCoords = Data(:,1:NumCoords+1);
nColumns=NumCoords+1;
end

% if you want the joint positions and velocites
if (optionVel==1) 
JointCoords = Data(:,1:(2*NumCoords+1));
nColumns = 2*NumCoords+1;
end

% Subfunction called to write the data in a .mot or .sto file in a form
% that's readable by OpenSim
WriteMotData_C(nRows,nColumns,range,JointCoords',optionType,optionVel) 

