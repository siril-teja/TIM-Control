MATLAB - U12 .NET examples for Windows
04/11/2013
support@labjack.com


This package contains MATLAB example scripts for using your LabJack U12. They
demonstrate LabJack usage using the MATLAB .NET interface and the U12 .NET
assembly LJDotNet.dll. Examples were tested with MATLAB 8.1 (R2013a).


Requirements:

1. Windows operating system
2. MATLAB with .NET interface support. Version 7.8 (R2009a) or newer.
3. U12 driver and .NET assembly. They are provided here:

http://labjack.com/support/u12/u12-setup
http://labjack.com/support/u12/examples/dotnet


Getting Started:

First make sure that you have fulfilled the requirements and have extracted the
example scripts somewhere on your computer.

Next, a simple way to get the example scripts running in MATLAB is to click
"Set Path" in the HOME->ENVIRONMENT toolstrip, then click the "Add with
Subfolders" button in the Set Path window and locate the extracted
MATLAB_LJDotNET folder. Select the folder and click the "Select Folder" button.
Now back at the "Set Path" window you will see the newly added folders. Click on
the "Save" button and next the "Close" button. In the Command Window you can now
run the example scripts by name, so for example to run the analog.m
script from the MATLAB_LJDotNET\Examples folder type this:

>> analog

Note that the above instructions are from using MATLAB 8.1 (R2013a). "Set Path"
instructions may differ in other MATLAB versions. 

Using the MATLAB .NET interface with the U12 .NET assembly:

To use the U12 .NET assembly in MATLAB use the NET.addAssembly method and
specify 'LJDotNet.dll'. Note that by default these instructions and the examples
assume you copied the .NET assembly to the
"C:\Program Files (x86)\LabJackU12Legacy\drivers\" folder. If it is in a
different location or you are using a Windows version older that Vista, specify
the correct location path on your computer.

>> ljAsm = NET.addAssembly('C:\Program Files (x86)\LabJackU12Legacy\drivers\LJDotNet.dll')

That will make the namespace and class in LJDotNet accessible in MATLAB. The
namespace/class containing the static methods/functions is lj.LabJack. To get
information on the U12 .NET class methods/functions under MATLAB use the
methodsview call. For example:

>> methodsview(lj.LabJack)

The example scripts will provide more help on MATLAB code and usage.

General U12 driver documentation can be found in the User's Guide:

http://labjack.com/support/u12/users-guide/4

