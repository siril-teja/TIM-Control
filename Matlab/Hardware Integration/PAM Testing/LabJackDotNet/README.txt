LabJack U12 .NET Beta3 Drivers
2-16-2017

Included in this .zip file is what you need to create .NET (using C# or VB.NET)
applications that work with your LabJack U12.

Included Files:

driver/LJDotNet.dll - The .dll that provides support for the LabJack U12 in
.NET. A .NET wrapper for the original ljackuw.dll U12 driver.

Example Code - A folder that contains Visual Studio .NET example projects that
demonstrate LJDotNet.dll usage. Made in Visual Studio 2003. For newer Visual
Studio usage, use the solution and project upgrade wizard to convert to your
version of Visual Studio. The upgrade wizard should run automatically when
opening the project or solution for the first time.

usage.txt - A file that lists the functions inside the LabJack object, with
correct parameter listings. 


Use of LJDotNet.dll is fairly straightforward.  It should be added to the
project using Visual Studio or your specific IDE.  If you are using Visual
Studio .NET, you can add LJDotNet.dll by right clicking on the project in the
file view menu, and selecting add reference.  Then locate LJDotNet.dll and it
will be added to the project. Since it references the original ljackuw.dll, that
file must be available to run during runtime.  ljackuw.dll is installed on your
your system using the U12 software installer from the LabJack website:

https://labjack.com/support/software/installers/u12

Each of the supported .NET LabJack functions has a static wrapper function
inside the LabJack object. In C# you must first specify that you are using the
LabJack namespace like so:

using lj;

In VB.NET only the LJDotNet.dll reference is needed.

Then you can call each function by using the LabJack object, followed by the 
function you want to call.  For example:

C#:
LabJack.EAnalogIn(ref ljID, 0, channel, 0, ref overVoltage, ref voltage);

VB.NET:
lj.LabJack.EAnalogIn(ljID, 0, channel, 0, overVoltage, voltage)

The parameters are specified almost exactly as they are listed in the LabJack
U12 datasheet. The usage.txt provides a full listing of U12 .NET functions in
LJDotNet.dll. You can also view the LJDotNet.dll functions inside Visual Studio
.NET.

The U12 datasheet can be found here which provides U12 hardware and driver
programming reference documentation:

https://labjack.com/support/datasheets/u12/programming-reference

If you have any questions, comments or find a bug, please email us at
support@labjack.com .


Changes:

2-16-2017 - README.txt update.

1-13-2009 - Fixed bug in the vbburst example where the 2D array for the voltages
parameter in the AIBurst function was being initialized incorrectly.  Also, 
updated projects so they reference the LJDotNet.dll in the LabJackDotNet\driver
directory.

2-1-2005 - Fixed a bug with TrisD in AOUpdate being passed as a ref when it
should not be.  Also added an example of setting a project that works with
the .NET object using Visual C++ Express.

2-26-2004 - Fixed a bug causing some functions to work improperly.  These will
no longer give a nullreference exception.  Also changed the System.Uint32 
references to uint to make things more clear.
