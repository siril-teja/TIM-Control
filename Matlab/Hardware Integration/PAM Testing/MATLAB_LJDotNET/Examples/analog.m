%
% Demonstrates how to use some of the U12 analog functions using
% MATLAB, .NET and the U12 driver.
%
% support@labjack.com
%

clc %Clear the MATLAB command window
clear %Clear the MATLAB variables

%Make the LabJack U12 .NET assembly visible in MATLAB.
ljAsm = NET.addAssembly('C:\Users\Siril TD\Desktop\TIM Control\Matlab\Hardware Integration\LabJack\LabJackDotNet\driver\LJDotNet.dll');

idnum = -1;  %Using first found U12
demo = 0;  %Normal operations
stateIO = 0;  %Output states for IO0-IO3
errorString = NET.createArray('System.Char', 50); %Empty string for error message

%AOUpdate specific paramters
trisD = 0;  %Directions for D0-D15
trisIO = 0;  %Directions for IO0-IO3
stateD = 0;  %Output states for D0-D15
updateDigital = 0;  %Tris and state values are only being read
resetCounter = 0;  %Not resetting counter
count = 0;  %Returned current count value
analogOut0 = 0.8;  %Voltage for AO0
analogOut1 = 3.2;  %Voltage for AO1

%AISample specific parameters
updateIO = 0;  %State values are only being read
ledOn = 0;  %Turning LED on
numChannels = 2;  %Reading 2 channels
%Reading AI2 and AI3
channels = NET.createArray('System.Int32', 2);
channels(1) = 2;
channels(2) = 3;
%Gains.  Does not matter in this case since we are performing single ended readings.
gains = NET.createArray('System.Int32', 2);
gains(1) = 0;
gains(2) = 0;
disableCal = 0;  %Will apply calibration constants
overVoltage = 0;  %Returns if overvoltage was detected (>1)
%Returned voltage readings.  Pass an array of all zeros.
voltages = NET.createArray('System.Single', 4);
voltages(1) = 0;
voltages(2) = 0;
voltages(3) = 0;
voltages(4) = 0;

disp(['Driver version: ', num2str(lj.LabJack.GetDriverVersion())]);

disp(['Setting AO0 to ' num2str(analogOut0) ' V and AO1 to ' num2str(analogOut1) ' V']);

[errorCode, idnum, stateD, stateIO, count] = lj.LabJack.AOUpdate(idnum, demo, trisD, trisIO, stateD, stateIO, updateDigital, resetCounter, count, analogOut0, analogOut1);
if(errorCode ~= 0)
    lj.LabJack.GetErrorString(errorCode, errorString);
    disp(['AOUpdate error ' num2str(errorCode) ' : ' char(System.String(errorString))])
    return
end

[errorCode, idnum, stateIO, overVoltage] = lj.LabJack.AISample(idnum, demo, stateIO, updateIO, ledOn, numChannels, channels, gains, disableCal, overVoltage, voltages);
if(errorCode ~= 0)
    lj.LabJack.GetErrorString(errorCode, errorString);
    disp(['AISample error ' num2str(errorCode) ' : ' char(System.String(errorString))])
    return
end

disp(['AI' num2str(channels(1)) ' = ' num2str(voltages(1)) ' V'])
disp(['AI' num2str(channels(2)) ' = ' num2str(voltages(2)) ' V'])