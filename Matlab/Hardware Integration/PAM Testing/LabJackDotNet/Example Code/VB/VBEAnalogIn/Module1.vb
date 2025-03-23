Imports System
Imports System.Threading    'Used for the sleep function


Module Module1

    Public Sub Main()
        Dim lngErrorcode As Long    'Parameters defined here

        Dim lngIDNum As Long
        Dim lngDemo As Long
        Dim intChannel As Integer
        Dim intGain As Integer

        Dim lngOverVoltage As Long
        Dim sngVoltage As Single

        Dim i As Integer

        lngOverVoltage = 0
        sngVoltage = 0

        intChannel = -1
        intGain = -1

        While (intChannel > 11 Or intChannel < 0)
            Console.WriteLine("Which channel do you want to read (0-7 SE or 8-11 Diff.)?")
            intChannel = Console.ReadLine           'Read input to determine the channel
        End While

        If (intChannel > 7) Then
            While (intGain > 7 Or intGain < 0)
                Console.WriteLine("Enter the gain for this channel: ")
                intGain = Console.ReadLine          'Read input to get the gain (if applicable)
            End While
        Else
            intGain = 0
        End If

        lngIDNum = -1
        lngDemo = 0

        For i = 1 To 10         'Take 10 readings, one half second apart
            lngErrorcode = lj.LabJack.EAnalogIn(lngIDNum, lngDemo, intChannel, intGain, lngOverVoltage, sngVoltage) 'standard EAnalogIn function call
            Console.WriteLine(sngVoltage)
            Thread.Sleep(500)
        Next i

    End Sub

End Module
