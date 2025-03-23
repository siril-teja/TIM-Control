%
% This example demonstrates how to use the U12 easy functions in the using
% MATLAB, .NET and the U12 driver.
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

%Setting analog outputs AO0 and AO1
analogOut0 = 2.0;
analogOut1 = 3.5;
disp(['Setting AO0 to ' num2str(analogOut0) ' V and AO1 to ' num2str(analogOut1) ' V.'])
[errorCode, idnum] = lj.LabJack.EAnalogOut(idnum, demo, analogOut0, analogOut1);
if(errorCode ~= 0)
    lj.LabJack.GetErrorString(errorCode, errorString);
    disp(['EAnalogOut error ' num2str(errorCode) ' : ' char(System.String(errorString))])
    return
end

%Reading from analog input AI0, single-ended
channel = 0; %AI0
gain = 0;  %G=1, +-20 V (gain 0 = 1)
overVoltage = 0;  %Returned overvoltage. Will get a value >0 if overvoltage is detected.
voltage = 0.0;  %Returned voltage
[errorCode, idnum, overVoltage, voltage] = lj.LabJack.EAnalogIn(idnum, demo, channel, gain, overVoltage, voltage);
if(errorCode ~= 0)
    lj.LabJack.GetErrorString(errorCode, errorString);
    disp(['EAnalogIn error ' num2str(errorCode) ' : ' char(System.String(errorString))])
    return
end
disp(['Single-ended AI' num2str(channel) ' voltage = ' num2str(voltage) ' V, overVoltage = ' num2str(overVoltage)])

%Setting digital line IO0 to output-high
channel = 0; %IO0
writeD = 0; %Set IO line (>0 for D line)
state = 1; %Output-High (>0 = high, 0 = low)
[errorCode, idnum] = lj.LabJack.EDigitalOut(idnum, demo, channel, writeD, state);
disp(['Setting digital line IO' num2str(channel) ' to output with state ' num2str(state)])
if(errorCode ~= 0)
    lj.LabJack.GetErrorString(errorCode, errorString);
    disp(['EDigitalOut error ' num2str(errorCode) ' : ' char(System.String(errorString))])
    return
end

%Reading digital line IO1
channel = 1; %IO1
readD = 0; %Read IO line (>0 for D line)
state = 0; %Returned state (>0 = high, 0 = low)
[errorCode, idnum, state] = lj.LabJack.EDigitalIn(idnum, demo, channel, readD, state);
if(errorCode ~= 0)
    lj.LabJack.GetErrorString(errorCode, errorString);
    disp(['EDigitalIn error ' num2str(errorCode) ' : ' char(System.String(errorString))])
    return
end
disp(['IO' num2str(channel) ' state = ' num2str(state)])

%Read from the Counter

%Reseting counter first
disp('Reading Counter:')
disp('  Resetting count and waiting 2 seconds for new data.');

resetCounter = 1; %Reset the counter (>0)
count = 0; %Returned count
ms = 0; %Returned Window's millisecond timer
[errorCode, idnum, count, ms] = lj.LabJack.ECount(idnum, demo, resetCounter, count, ms);
if(errorCode ~= 0)
    lj.LabJack.GetErrorString(errorCode, errorString);
    disp(['ECount (reset) error ' num2str(errorCode) ' : ' char(System.String(errorString))])
    return
end

%Wait for 2 seconds for data
pause(2);

%Reading Counter
resetCounter = 0; %Do not reset counter
[errorCode, idnum, count, ms] = lj.LabJack.ECount(idnum, demo, resetCounter, count, ms);
if(errorCode ~= 0)
    lj.LabJack.GetErrorString(errorCode, errorString);
    disp(['ECount (read) error ' num2str(errorCode) ' : ' char(System.String(errorString))])
    return
end

disp(['  Count = ' num2str(count) ' , Windows timer = ' num2str(ms) ' ms']);