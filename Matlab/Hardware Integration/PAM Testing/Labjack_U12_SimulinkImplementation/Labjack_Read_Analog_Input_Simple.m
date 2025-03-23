function Labjack_Read_Analog_Input_Simple(block)

% The setup method is used to setup the basic attributes of the
% S-function such as ports, parameters, etc. Do not add any other
% calls to the main body of the function.  
%   
setup(block);
  
%endfunction

% Function: setup ===================================================
% Abstract:
%   Set up the S-function block's basic characteristics such as:
%   - Input ports
%   - Output ports
%   - Dialog parameters
%   - Options
% 
%   Required         : Yes
%   C MEX counterpart: mdlInitializeSizes
%
function setup(block)

%---------------------DESCRIPTION---------------------------------
%Initialy the function is developed to read the value of a single Analog
%Input

  
%The input is
%   1. The Analog Input Channel number
 
% The 2 Outputs are for 
% 1. Displaying the status regarding an error
% 2. Displaying the voltage value of the Analog Input channel



  block.NumInputPorts  = 1;
  block.NumOutputPorts = 2;
 %-----------------------------------------------------------------------
 
 % Override the input port properties.
  block.InputPort(1).DatatypeID  = 0;  % double
  block.InputPort(1).Complexity  = 'Real';
  

  
  % Override the output port properties.
  block.OutputPort(1).DatatypeID  = 0; % double
  block.OutputPort(1).Complexity  = 'Real';
  
  block.OutputPort(2).DatatypeID  = 0; % double
  block.OutputPort(2).Complexity  = 'Real';


  % Register the parameters.
  block.NumDialogPrms     = 0;
 % block.DialogPrmsTunable = {'Tunable','Nontunable','SimOnlyTunable'};
  
  % Set up the continuous states.
  block.NumContStates = 0;

  % Register the sample times.
  %  [0 offset]            : Continuous sample time
  %  [positive_num offset] : Discrete sample time
  %
  %  [-1, 0]               : Inherited sample time
  %  [-2, 0]               : Variable sample time
  block.SampleTimes =[0.5,0];
%   In the case of a discrete sample time, the vector is [Ts, To] where Ts is the sampling period and To is the initial time offset.
  
  % -----------------------------------------------------------------
  % Options
  % -----------------------------------------------------------------
  % Specify if Accelerator should use TLC or call back to the 
  % MATLAB file
  block.SetAccelRunOnTLC(false);
  
  % Specify the block's operating point compliance. The block operating 
  % point is used during the containing model's operating point save/restore)
  % The allowed values are:
  %   'Default' : Same the block's operating point as of a built-in block
  %   'UseEmpty': No data to save/restore in the block operating point
  %   'Custom'  : Has custom methods for operating point save/restore
  %                 (see GetOperatingPoint/SetOperatingPoint below)
  %   'Disallow': Error out when saving or restoring the block operating point.
  block.OperatingPointCompliance = 'Default';
  
  % -----------------------------------------------------------------
  % The MATLAB S-function uses an internal registry for all
  % block methods. You should register all relevant methods
  % (optional and required) as illustrated below. You may choose
  % any suitable name for the methods and implement these methods
  % as local functions within the same file.
  % -----------------------------------------------------------------
   
 
  %
  % SetInputPortSamplingMode:
  %   Functionality    : Check and set input and output port 
  %                      attributes and specify whether the port is operating 
  %                      in sample-based or frame-based mode
  %   C MEX counterpart: mdlSetInputPortFrameData.
  %   (The DSP System Toolbox is required to set a port as frame-based)
  %
  block.RegBlockMethod('SetInputPortSamplingMode', @SetInpPortFrameData);
  
 
  
  %
  % PostPropagationSetup:
  %   Functionality    : Set up the work areas and the state variables. You can
  %                      also register run-time methods here.
  %   C MEX counterpart: mdlSetWorkWidths
  %
  block.RegBlockMethod('PostPropagationSetup', @DoPostPropSetup);

  % -----------------------------------------------------------------
  % Register methods called at run-time
  % -----------------------------------------------------------------
  
  % 
  % ProcessParameters:
  %   Functionality    : Call to allow an update of run-time parameters.
  %   C MEX counterpart: mdlProcessParameters
  %  
  block.RegBlockMethod('ProcessParameters', @ProcessPrms);

  % 
  % InitializeConditions:
  %   Functionality    : Call to initialize the state and the work
  %                      area values.
  %   C MEX counterpart: mdlInitializeConditions
  % 
  block.RegBlockMethod('InitializeConditions', @InitializeConditions);
  
  % 
  % Start:
  %   Functionality    : Call to initialize the state and the work
  %                      area values.
  %   C MEX counterpart: mdlStart
  %
  block.RegBlockMethod('Start', @Start);

  % 
  % Outputs:
  %   Functionality    : Call to generate the block outputs during a
  %                      simulation step.
  %   C MEX counterpart: mdlOutputs
  %
  block.RegBlockMethod('Outputs', @Outputs);

  % 
  % Update:
  %   Functionality    : Call to update the discrete states
  %                      during a simulation step.
  %   C MEX counterpart: mdlUpdate
  %
%   block.RegBlockMethod('Update', @Update);

  % 
  % Derivatives:
  %   Functionality    : Call to update the derivatives of the
  %                      continuous states during a simulation step.
  %   C MEX counterpart: mdlDerivatives
  %
%  block.RegBlockMethod('Derivatives', @Derivatives);
  
  % 
  % Projection:
  %   Functionality    : Call to update the projections during a
  %                      simulation step.
  %   C MEX counterpart: mdlProjections
  %
%  block.RegBlockMethod('Projection', @Projection);
  
  % 
  % SimStatusChange:
  %   Functionality    : Call when simulation enters pause mode
  %                      or leaves pause mode.
  %   C MEX counterpart: mdlSimStatusChange
  %
%  block.RegBlockMethod('SimStatusChange', @SimStatusChange);
  
  % 
  % Terminate:
  %   Functionality    : Call at the end of a simulation for cleanup.
  %   C MEX counterpart: mdlTerminate
  %
  block.RegBlockMethod('Terminate', @Terminate);

 
function DoPostPropSetup(block)
  block.NumDworks = 1;
  
  block.Dwork(1).Name            = 'sampletime';
  block.Dwork(1).Dimensions      = 1;
  block.Dwork(1).DatatypeID      = 0;      % double
  block.Dwork(1).Complexity      = 'Real'; % real
  block.Dwork(1).UsedAsDiscState = true;
  

  
  % Register all tunable parameters as runtime parameters.
  block.AutoRegRuntimePrms;
%endfunction
  
function ProcessPrms(block)

  block.AutoUpdateRuntimePrms;
 
%endfunction

function SetInpPortFrameData(block, idx, fd)
  
  block.InputPort(idx).SamplingMode = fd;
  block.OutputPort(1).SamplingMode  = fd;
 block.OutputPort(2).SamplingMode  = fd;
 

%endfunction

function InitializeConditions(block)

% block.ContStates.Data = 1;
block.Dwork(1).Data      =1 ;



%endfunction

function Start(block)

% -----------DESCRIPTION-----------
%within this block the labjack library is loaded into the matlab
%environment and a function list is alos prepared.

loadlibrary('ljackuw','ljackuw.h'); %loading the library and the header file

functionlist=libfunctions('ljackuw','-full'); % Saving the functions and implicitly converting them from C format into Matlab format

% Setting the C function to find the first operating Labjack device
demo= int32(0);
% Configuring ports and data. Input port 1 is the value to write for the
% analog outputs. The first output port displays the Analog Input 0's value
% and the second output port displays the AO values.



%endfunction

function Outputs(block)

%---------------------------DESCRIPTION-------------
% This is where the function EAnaligIN is called after assigning the Analog
% Input channel number which is provided by the user during runtime to the
% function.

id=-1; % This is done to call the EAnalogIn function from the first available Labjack device that is connected to the PC.
idnum=libpointer('longPtr',id); % Coverting the id to a Matlab pointer type
retval=int32(20); % Assigning a randum number of 20 to check whether an error occurs during execution. By default when the function is working as expected a number i.e. (0) is returned to the Matlab environment from the Labjack device.
channel=int32(block.InputPort(1).Data); % Assigning the User Input data regarding the channel number to extract the Analog Input Voltage on the desired channel.
gain=int32(0); % Setting the gain  to default.
ov=int32(0);%Overvoltage assignment
v=single(0); % Default assignment of Voltage as zero.
demo= int32(0); % Default assignment to indicate Labjack is not running in demo mode.

overVoltage=libpointer('longPtr',ov);
voltage=libpointer('singlePtr',v);

% Calling the EAnalogIn function

[retval,idnum]= calllib('ljackuw','EAnalogIn',idnum,demo,channel,gain,overVoltage,voltage);
AIvalue=single(voltage.Value); % Saving the value of Voltage of the desired Analog Input Channel
 

%Output functionality Implementation of the S-Function
block.OutputPort(2).Data=double(AIvalue); % Displaying the voltage Signal Value

%Error detection

if (retval==0)
   
block.OutputPort(1).Data = 0;%0 represents no error
else
block.OutputPort(1).Data =1; %1 represents an error
end

  
%endfunction

   
function Terminate(block)

disp(['Terminating the block with handle ' num2str(block.BlockHandle) '.']);

%endfunction
