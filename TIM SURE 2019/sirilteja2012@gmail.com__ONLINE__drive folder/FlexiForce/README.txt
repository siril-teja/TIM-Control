FlexiForce OEM Development Kit ReadMe (Rev B)
--------------------------------------------------

Drivers are located at USB Flash Drive Root:

*\Drivers

--------------------------------------------------

FTDI Driver

The FTDI chip driver is required for serial communication with the hardware. If you receive a "JIT Unhandled 
Exception Input String was not in a a correct format" error, make sure the FTDI drivers are installed. Check
that the hardware is being seen as a COM & LPT Port in the Device Manager. These drivers can be installed from
the "CDM21228_Setup.exe" file located in the *\Drivers\FTDI Chip directory on the flash drive.

--------------------------------------------------

MicroView.h

The Microview drivers are required to be added to the Arduino work environment to program the OLED screen. The
necessary files are in a zip file located in the *\Drivers\Microview.h directory in the .zip file. To add the
Microview drivers to the Arduino work environment go to Sktech>>Include Library>>Add .ZIP Library and point to
the "SparkFun_MicroView_Arduino_Library-master.zip" file.