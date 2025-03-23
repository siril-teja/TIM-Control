function Labjack_Read_Digital_Input_Simple(block)

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

  block.NumInputPorts  = 2;
  block.NumOutputPorts = 2;
  
  % Set up the port properties to be inherited or dynamic.
%   block.SetPreCompInpPortInfoToDynamic;
%   block.SetPreCompOutPortInfoToDynamic;

  % Override the input port properties.
  block.InputPort(1).DatatypeID  = 0;  % double
  block.InputPort(1).Complexity  = 'Real';
  
  block.InputPort(2).DatatypeID  = 0;  % double
  block.InputPort(2).Complexity  = 'Real';

  
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
block.Dwork(1).Data      = 1;


%endfunction

function Start(block)


loadlibrary('ljackuw','ljackuw.h'); %loading the library and the header file

functionlist=libfunctions('ljackuw','-full'); % Saving the functions and implicitly converting them from C format into Matlab format

% Setting the C function to find the first operating Labjack device

%Assigning the value of the input blocks to variables.


function Outputs(block)

%Assigning the value of variables to the respective variables of the
%inbuilt Labjack function variable declaration.
demo= int32(0);

pin_no=block.InputPort(1).Data;
dioswitch=block.InputPort(2).Data;
id=-1;
idnum=libpointer('longPtr',id);
% Setting the ID to zero to connect to the first possible labjack device
% connected.
retval=int32(20);
% Setting the value returned by operating the s function to 20. The value of this must be zero if there is no error, and will return a value that indicates the error code for troubleshooting. 
channel=int32(pin_no);
state_init=int32(20);
readD = int32(dioswitch);
state=libpointer('longPtr',state_init);

[retval,idnum,state] = calllib('ljackuw','EDigitalIn',idnum,demo,channel,readD,state)
DIvalue=state;
% // EDigitalIn:	Easy function reads 1 digital input.  Also configures
% //				the requested pin to input and leaves it that way.
% //
% //				Note that this is a simplified version of the lower
% //				level function DigitalIO, which operates on all 20
% //				digital lines.  The DLL keeps track of the current
% //				direction and output state of all lines, so that this
% //				easy function can operate on a single line without
% //				changing the others.  When the DLL is first loaded,
% //				though, it does not know the direction and state of
% //				the lines and assumes all directions are input and
% //				output states are low.
% //
% //	Returns:	LabJack errorcodes or 0 for no error (I32).
% //	Inputs:		*idnum		-Local ID, Serial Number, or -1 for first
% //							 found (I32).
% //				demo		-Send 0 for normal operation, >0 for demo
% //							 mode (I32).  Demo mode allows this function to
% //							 be called without a LabJack, and does little but
% //							 simulate execution time.
% //				channel		-Line to read.  0-3 for IO or 0-15 for D.
% //				readD		-If >0, a D line is read instead of an IO line.
% //	Outputs:	*idnum		-Returns the Local ID or -1 if no LabJack is
% //							 found (I32).
% //				*state		-TRUE/Set if >0.  FALSE/Clear if 0.
% //
% //	Time:		20 ms
% //----------------------------------------------------------------------
% long _stdcall EDigitalIn(long *idnum,
% 					   long demo,
% 					   long channel,
% 					   long readD,
% 					   long *state);
% 

%Error detection

if (retval==0)
   
block.OutputPort(1).Data =0; %No error
else
block.OutputPort(1).Data =1;
end

if (DIvalue==0)
   
block.OutputPort(2).Data =0; %No error
else
block.OutputPort(2).Data =1;
end


  
%endfunction




    
function Terminate(block)

disp(['Terminating the block with handle ' num2str(block.BlockHandle) '.']);


