function Labjack_Write_Analog_Output_Simple(block)


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
%Initialy the function is developed to assign the desired Voltage value of
%a single Analog Output channel.

  % Register the number of ports.
  %The 2 inputs are
%   1. Analog Output Channel no.
%   2. Voltage value to write.


% The 1 Output is for 
% 1. Displaying the error status of the  s function.



  block.NumInputPorts  = 2;
  block.NumOutputPorts = 1;
  
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
   
  % -----------------------------------------------------------------
  % Register the methods called during update diagram/compilation.
  % -----------------------------------------------------------------
  
  % 
  % CheckParameters:
  %   Functionality    : Called in order to allow validation of the
  %                      block dialog parameters. You are 
  %                      responsible for calling this method
  %                      explicitly at the start of the setup method.
  %   C MEX counterpart: mdlCheckParameters
  %
 % block.RegBlockMethod('CheckParameters', @CheckPrms);

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
%   
%   block.Dwork(2).Name            = 'numPause';
%   block.Dwork(2).Dimensions      = 1;
%   block.Dwork(2).DatatypeID      = 7;      % uint32
%   block.Dwork(2).Complexity      = 'Real'; % real
%   block.Dwork(2).UsedAsDiscState = true;
  
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

% Setting the C function to run in normal mode
demo= int32(0);

pin_no=block.InputPort(1).Data;
desired_voltage=block.InputPort(2).Data;
%Assigning the value of the input blocks to variables.
%endfunction

function Outputs(block)
id=-1; %setting the C function to work with first operating Labjack device
idnum=libpointer('longPtr',id);
retval=int32(20); % Settingthe return value to a default number of 20 to check for normal execution during run time.
%Code to write the desired value only to a single output channel and not on
%both the Analog outputs
asignalswitch=block.InputPort(1).Data;
if (asignalswitch ==0)

    %Assignment of required values, to read the present voltage on the
    %channel A1.
%id=-1;
idnum=libpointer('longPtr',id);
retval=int32(20);
channel=int32(1);
gain=int32(0);
ov=int32(0);
v=single(0);
demo= int32(0);

overVoltage=libpointer('longPtr',ov);
voltage=libpointer('singlePtr',v);
%Function call to read the voltage on the pin 1

[retval,idnum]= calllib('ljackuw','EAnalogIn',idnum,demo,channel,gain,overVoltage,voltage);
AOvalue_redundant=single(voltage.Value); %saving value

A0= block.InputPort(2).Data;
A1= AOvalue_redundant;

%Using the function to write the desired voltage value as well as the
%existing voltage value on the other pin using EanalogOut function.

[retval,idnum]= calllib('ljackuw','EAnalogOut',idnum,demo,A0,A1);
block.OutputPort(1).Data=1;


elseif((asignalswitch == 1))
    
         %Assignment of required values, to read the present voltage on the
    %channel 0.
        
    id=-1;
idnum=libpointer('longPtr',id);
retval=int32(20);
channel=int32(0);
gain=int32(0);
ov=int32(0);
v=single(0);
demo= int32(0);

overVoltage=libpointer('longPtr',ov);
voltage=libpointer('singlePtr',v);

[retval,idnum]= calllib('ljackuw','EAnalogIn',idnum,demo,channel,gain,overVoltage,voltage);
AOvalue_redundant=single(voltage.Value); 

A1= block.InputPort(2).Data;
A0= AOvalue_redundant;

[retval,idnum]= calllib('ljackuw','EAnalogOut',idnum,demo,A0,A1);
block.OutputPort(1).Data=1;
  
    
%     else
%         {
%             % Have to throw an exception
%         }
end




  
%endfunction


    
function Terminate(block)

disp(['Terminating the block with handle ' num2str(block.BlockHandle) '.']);

%endfunction
%  
% function operPointData = GetOperatingPoint(block)
% % package the Dwork data as the entire operating point of this block
% operPointData = block.Dwork(1).Data;
% 
% %endfunction
% 
% function SetOperatingPoint(block, operPointData)
% % the operating point of this block is the Dwork data (this method 
% % typically performs the inverse actions of the method GetOperatingPoint)
% block.Dwork(1).Data = operPointData;

%endfunction
