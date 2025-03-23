// This is the main project file for VC++ application project 
// generated using an Application Wizard.

#include "stdafx.h"

using namespace System;
using namespace lj;

int _tmain()
{
	// The main difference with VC++ Express and .NET 2.0 is the way
	// Arrays are declared so they can be passed to the .NET wraper without error
	// The following is how they are defined and initialized.

	array<Int32>^ channels = gcnew array<Int32>(4) {0, 1, 2, 3};
	array<Int32>^ gains = gcnew array<Int32>(4){0, 0, 0, 0};
	array<float>^ voltages = gcnew array<float>(4){0.0f, 0.0f, 0.0f, 0.0f};
	int errorcode;
	int idnum=-1;
	int demo=0;
	int stateIO=0;
	int numCh=4;
	int ov;

	
	errorcode = LabJack::AISample (idnum,demo,stateIO,0,1,numCh,channels,gains,0,ov,voltages);
	printf("\nAISample error = %d\n",errorcode);
	printf("\nLocal ID = %d\n",idnum);
	printf("AI0 = %f\n",voltages[0]);
	printf("AI1 = %f\n",voltages[1]);
	printf("AI2 = %f\n",voltages[2]);
	printf("AI3 = %f\n",voltages[3]);

	channels[0]=4;
	channels[1]=5;
	channels[2]=6;
	channels[3]=7;
	voltages[0]=0.0f;  //must initialize voltages array to zeros
	voltages[1]=0.0f;
	voltages[2]=0.0f;
	voltages[3]=0.0f;
	errorcode = LabJack::AISample (idnum,demo,stateIO,0,1,numCh,channels,gains,0,ov,voltages);
	printf("\nAISample error = %d\n",errorcode);
	printf("\nLocal ID = %d\n",idnum);
	printf("AI4 = %f\n",voltages[0]);
	printf("AI5 = %f\n",voltages[1]);
	printf("AI6 = %f\n",voltages[2]);
	printf("AI7 = %f\n",voltages[3]);
	Console::ReadLine();

}