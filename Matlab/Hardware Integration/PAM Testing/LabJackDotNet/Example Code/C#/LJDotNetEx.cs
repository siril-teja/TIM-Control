using System;
using System.Text;
using System.Threading;

// We must use the namespace lj, which is
// where the .NET wrapper object resides
// You must add the LJDotNet.dll to the project
// as a reference. 
using lj;


namespace ljack 
{

	class LJDotNetEx 
	{

		// Make this single threaded
		[STAThread]
		static void Main(string[] args) 
		{
			// First call the GetAllLabJacks Function we Defined
			int[] idList = GetAllLabJacks();

			// Check to see if any LabJacks were found
			if(idList.Length == 0)
				Console.WriteLine("No LabJacks found!");
			else 
			{
				// List the IDs of LabJacks we found
				foreach(int id in idList) 
				{
					Console.WriteLine(id);
				}
			}

			// Output a blank line
			Console.WriteLine();

			// Read in the analog input from channel 0
			// and output the result
			Console.WriteLine("Reading Analog Input");
			Console.WriteLine(ReadAnalogInput(0));
			
			// Set the analog output of channel 0 to 5.0
			Console.WriteLine("Set Analog Output");
			SetAnalogOutput(0, 5.0f);

			int stateD = 0, stateIO = 0;
			
			// read digital inputs and output stateD & stateIO
			Console.WriteLine("Read Digital Inputs");
			ReadDigitalInputs(ref stateD, ref stateIO);
			Console.WriteLine("{0} {1}", stateD.ToString("X"), stateIO.ToString("X"));
			
			// Set the digital outputs, channel 0 to 0 and channel 1 to 1
			Console.WriteLine("Set Digital Outputs");
			SetDigitalOutput(0, true, 0);
			SetDigitalOutput(1, true, 1);
			
			Thread.Sleep(1000);
			
			// AIBurst
			Console.WriteLine("AIBurst");
			float[,] v=AIBurst(1024);
			

			// Output values in the array for channel 0
			for(int i=0;i<20;i++)
				Console.WriteLine(v[i,0]);
			
			AIStream();
			
			Console.ReadLine();

			SetAnalogOutput(0, 0.0f);
		}

		//---------------------------------------------------------------------
		//
		public static void ThrowErrorMessage(string msg, int errorCode) 
		{
			StringBuilder errorString = new StringBuilder(50);
			LabJack.GetErrorString(errorCode, errorString);
			throw new Exception(msg + ":\r\n\r\n" + errorString);
		}

		//---------------------------------------------------------------------
		// This returns an array of all the local IDs which we use.
		//
		public static int[] GetAllLabJacks() 
		{
			// Make sure we allocate space for what is passed
			int[] productIDList = new int[127];
			int[] serialNumList = new int[127];
			int[] localIDList = new int[127];
			int[] powerList = new int[127];
			int[,] calMatrix = new int[127, 20];
			int numFound = 0;
			int reserved1 = 0, reserved2 = 0;
			
			// Call the ListAll function.  We must use the keyword ref for parameters 
			// that aren't arrays that return data
			int result = LabJack.ListAll(productIDList, serialNumList, localIDList,
				powerList, calMatrix, ref numFound, ref reserved1, ref reserved2);
			if(result != 0)
				ThrowErrorMessage("Unable to enumerate controllers", result);

			int[] ljs = new int[numFound];
			int i = 0;

			// count how many we found and set
			// the array which will be returned
			// to contain valid IDs
			foreach(int id in localIDList) 
			{
				if(id != 9999) 
				{
					ljs[i] = id;
					++i;
				}
			}
			
			// return that array
			return ljs;
		}

		//---------------------------------------------------------------------
		// This is our function that read's analog inputs
		//
		public static float ReadAnalogInput(int channel) 
		{
			int ljID = -1;
			int overVoltage = 0;
			float voltage = 0.0f;
			
			int result = LabJack.EAnalogIn(ref ljID, 0, channel, 0, ref overVoltage, ref voltage);
			if(result != 0)
				ThrowErrorMessage("Error reading analog input", result);
			return voltage;
		}

		//---------------------------------------------------------------------
		// Set the analog outputs
		//
		public static void SetAnalogOutput(int channel, float voltage) 
		{
			int ljID = -1;
			int result = 0;

			if(channel == 0)
				result = LabJack.EAnalogOut(ref ljID, 0, voltage, -1.0f);
			else if(channel == 1)
				result = LabJack.EAnalogOut(ref ljID, 0, -1.0f, voltage);
			else
				throw new Exception("Invalid analog output channel");

			if(result != 0)
				ThrowErrorMessage("Error reading analog input", result);
		}

		//---------------------------------------------------------------------
		// Read inputs and set stateD and stateIO
		//
		public static void ReadDigitalInputs(ref int stateD, ref int stateIO) 
		{
			int ljID = -1;
			int trisD = 0, trisIO = 0;
			int outputD = 0;

			int result = LabJack.DigitalIO(ref ljID, 0, ref trisD, trisIO, ref stateD, ref stateIO, 0, ref outputD);
			if(result != 0)
				ThrowErrorMessage("Error reading digital inputs", result);
		}

		//---------------------------------------------------------------------
		// Read digital input
		//
		public static int ReadDigitalInput(int channel, bool readD) 
		{
			int ljID = -1;
			int state = 0;

			int result = LabJack.EDigitalIn(ref ljID, 0, channel, readD ? 1 : 0, ref state);
			if(result != 0)
				ThrowErrorMessage("Error reading digital input", result);

			return state;
		}

		//---------------------------------------------------------------------
		// Set Digital Outputs
		//
		public static void SetDigitalOutput(int channel, bool writeD, int state) 
		{
			int ljID = -1;

			int result = LabJack.EDigitalOut(ref ljID, 0, channel, writeD ? 1 : 0, state);
			if(result != 0)
				ThrowErrorMessage("Error setting digital output", result);
		}
		
		//---------------------------------------------------------------------
		// AIBurst
		//
		public static float[,] AIBurst(int numScans) 
		{
			int ljID = -1;
			int stateIOin=0;
			int[] channels={0,0,0,0};
			int[] gains= {0,0,0,0};
			float scanRate=2048;
			float[,] voltages=new float[4096,4];
			int[] stateIOout=new int[4096]; 
			int overVoltage=0; 

			int result = LabJack.AIBurst(ref ljID, 0, stateIOin, 0,
				1, 1, 
				channels, 
				gains, 
				ref scanRate,
				0, 0, 0,
				numScans, 5, 
				voltages,
				stateIOout, 
				ref overVoltage,
				2);

			if(result != 0)
				ThrowErrorMessage("Error setting digital output", result);

			return voltages;
		}

		//---------------------------------------------------------------------
		// AIStream
		//
		public static void AIStream() 
		{

			int error;
			int ljID = -1;
			int demo=0,numChannels=4,disableCal=0;
			int[] channels={0,1,2,3};
			int[] gains={0,0,0,0};
			float sr=250.0F;
			int numScans=250,timeout=10;
			float[,] voltages=new float[4096,4];
			int[] stateIOout=new int[4096];
			int ljb=-1;
			int ov=-1;
			int numIts = 5;
			int reserved=0;
			
			Console.WriteLine("AIStream");
			error=LabJack.AIStreamStart(ref ljID, demo, 0, 0, 1, numChannels, channels,
				gains, ref sr, disableCal, 0, 0);
			if(error!=0)
			{
				Console.WriteLine("AIStreamStart Error: {0}", error);
			}

			int i=0;
			while((error==0) && (i<numIts))
			{	
				for(int j=0;j<4096;j++)
				{
					stateIOout[j]=0;
					for(int k=0;k<4;k++)
					{
						voltages[j,k]=0;
					}
				}

				error = LabJack.AIStreamRead(ljID,numScans,timeout,voltages,stateIOout,ref reserved ,ref ljb,ref ov);
				if(error!=0)
				{
					Console.WriteLine("AIStreamRead Error:", error);
				}
				Console.WriteLine("1st Scan:  V1={0}, V2={1}, V3={2}, V4={3}", voltages[0,0],voltages[0,1],voltages[0,2],voltages[0,3]);
				Console.WriteLine("LabJack Scan Backlog = {0}",ljb);
				i++;
			}

			LabJack.AIStreamClear(ljID);

		}
	}
}
