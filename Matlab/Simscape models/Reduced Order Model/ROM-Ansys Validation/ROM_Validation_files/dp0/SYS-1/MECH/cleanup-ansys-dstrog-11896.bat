@echo off
set LOCALHOST=%COMPUTERNAME%
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 49852)
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 48436)
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 27760)
if /i "%LOCALHOST%"=="dstrog" (taskkill /f /pid 11896)

del /F cleanup-ansys-dstrog-11896.bat
