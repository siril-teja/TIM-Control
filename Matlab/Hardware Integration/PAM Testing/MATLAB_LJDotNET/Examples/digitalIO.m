% Demonstrates how to use the DigitalIO function to set and read U12
% digital IO using MATLAB, .NET and the U12 driver. Look at easyFunctions.m
% for more digital IO examples.
%
% support@labjack.com
%

clc %Clear the MATLAB command window
clear %Clear the MATLAB variables

%Make the LabJack U12 .NET assembly visible in MATLAB.
ljAsm = NET.addAssembly('C:\Program Files (x86)\LabJackU12Legacy\drivers\LJDotNet.dll');

idnum = -1;  %Using first found U12
demo = 0;  %Normal operations
errorString = NET.createArray('System.Char', 50); %Empty string for error message

disp(['Driver version: ', num2str(lj.LabJack.GetDriverVersion())]);

%Setting and reading directions and states
trisD = hex2dec('00FF');  %Setting D0-7 to outputs, D8-15 to inputs (b0000000011111111)
trisIO = hex2dec('3');  %Setting IO0-1 to outputs, IO2-3 to inputs (b0011)
stateD = hex2dec('00F0');  %Setting D0-3 to low. D4-7 to high (b0000000011110000)
stateIO = hex2dec('2');  %Setting IO0 to low. IO1 to high (b0010)
updateDigital = 1;  %Updating D and IO lines
outputD = 0;  %Returns of the output registers for D0-D15
[errorCode, idnum, trisD, stateD, stateIO, outputD] = lj.LabJack.DigitalIO(idnum, demo, trisD, trisIO, stateD, stateIO, updateDigital, outputD);
if(errorCode ~= 0)
    lj.LabJack.GetErrorString(errorCode, errorString);
    disp(['DigitalIO (update) error ' num2str(errorCode) ' : ' char(System.String(errorString))])
    return
end

disp('DigitalIO, updating lines:');
disp(['  D directions (read) = 0x' dec2hex(trisD, 4) ', states (read) = 0x' dec2hex(stateD, 4) ', output registers (read) = 0x' dec2hex(outputD, 4)]);
disp(['  IO directions (set) = 0x' dec2hex(trisIO, 1) ', states (read) = 0x' dec2hex(stateIO, 1)]);

% Only reading current directions (D lines only) and states
trisD = 0;
trisIO = 0;
stateD = 0;
stateIO = 0;
updateDigital = 0;  %Only read performed
[errorCode, idnum, trisD, stateD, stateIO, outputD] = lj.LabJack.DigitalIO(idnum, demo, trisD, trisIO, stateD, stateIO, updateDigital, outputD);
if(errorCode ~= 0)
    lj.LabJack.GetErrorString(errorCode, errorString);
    disp(['DigitalIO (read) error ' num2str(errorCode) ' : ' char(System.String(errorString))])
    return
end

disp('DigitalIO, read only:');
disp(['  D directions = 0x' dec2hex(trisD, 4) ', states = 0x' dec2hex(stateD, 4) ', output registers = 0x' dec2hex(outputD, 4)]);
disp(['  IO states = 0x' dec2hex(stateIO, 1)]);