@echo off
set LOCALHOST=%COMPUTERNAME%
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 42440)
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 27616)
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 38636)
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 40728)

del /F cleanup-ansys-dstrog-40728.bat
