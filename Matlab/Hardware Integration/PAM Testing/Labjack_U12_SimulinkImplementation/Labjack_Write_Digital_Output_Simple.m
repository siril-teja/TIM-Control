function Labjack_Write_Digital_Output_Simple(block)

%
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

  % Register the number of ports.
  % This s function has 2 inputs and a single output and serves to read the value of a particular pin (digital Input).
  
%  The 2 Inputs are for 
% 1. Choosing the Pin number
% 2. Switching between the D (Value = 0) and IO Line (Value = 1)



% The 1 Output is for 
% 1. Displaying the status of the command (Working or Error)

  block.NumInputPorts  = 3;
  block.NumOutputPorts = 1;
  
  % Set up the port properties to be inherited or dynamic.
%   block.SetPreCompInpPortInfoToDynamic;
%   block.SetPreCompOutPortInfoToDynamic;

  % Override the input port properties.
  block.InputPort(1).DatatypeID  = 0;  % double
  block.InputPort(1).Complexity  = 'Real';
  
  block.InputPort(2).DatatypeID  = 0;  % double
  block.InputPort(2).Complexity  = 'Real';

  block.InputPort(3).DatatypeID  = 0;  % double
  block.InputPort(3).Complexity  = 'Real';
  
  % Override the output port properties.
  block.OutputPort(1).DatatypeID  = 0; % double
  block.OutputPort(1).Complexity  = 'Real';
  
  
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

%endfunction

function InitializeConditions(block)

% block.ContStates.Data = 1;
block.Dwork(1).Data      = 1;



%endfunction

function Start(block)



loadlibrary('ljackuw','ljackuw.h'); %loading the library and the header file

functionlist=libfunctions('ljackuw','-full'); % Saving the functions and implicitly converting them from C format into Matlab format

% Setting the C function to find the first operating Labjack device
demo= int32(0);

%pin_no=block.InputPort(1).Data;

%Assigning the value of the input blocks to variables.


function Outputs(block)

%Assigning the value of variables to the respective variables of the
%inbuilt Labjack function variable declaration.
demo= int32(0);

id=-1;
idnum=libpointer('longPtr',id);
% Setting the ID to zero to connect to the first possible labjack device
% connected.
retval=int32(20);
% Setting the value returned by operating the s function to 20. The value of this must be zero if there is no error, and will return a value that indicates the error code for troubleshooting. 
channel=int32(block.InputPort(1).Data); %int32(pin_no);
dioswitch=block.InputPort(2).Data;
%state_init=int32(20);
writeD = int32(dioswitch);
state=int32(block.InputPort(3).Data);

[retval] = calllib('ljackuw','EDigitalOut',idnum,demo,channel,writeD,state);



%Error detection

if (retval==0)
block.OutputPort(1).Data =0; % No error
else
block.OutputPort(1).Data =1; % Error Detected
end


  
%endfunction



    
function Terminate(block)

disp(['Terminating the block with handle ' num2str(block.BlockHandle) '.']);

