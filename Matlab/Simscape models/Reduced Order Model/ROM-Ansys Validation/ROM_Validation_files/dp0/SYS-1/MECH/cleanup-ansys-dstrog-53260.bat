@echo off
set LOCALHOST=%COMPUTERNAME%
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 62024)
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 33364)
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 35320)
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 53260)

del /F cleanup-ansys-dstrog-53260.bat
