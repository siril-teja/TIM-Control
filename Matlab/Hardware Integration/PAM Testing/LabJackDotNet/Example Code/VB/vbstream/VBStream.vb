'---------------------------------------------------------------------------
'
'  ljcstream.c
'  
'  Simple example starts a stream and reads 250 scans/second from 4 
'  channels (AI0-3) for 5 seconds.   
'
'  Requires LabJack U12 DLL V1.05 or later.
'
'  support@labjack.com
'  2/2010
'----------------------------------------------------------------------
'

Module Module1

    Public Sub Main()
        Dim err As Long
        Dim idnum As Long = -1
        Dim demo As Long = 0
        Dim numChannels As Long = 4
        Dim disableCal As Long = 0
        Dim transferMode As Long = 0
        Dim channels() As Integer
        channels = New Integer() {0, 1, 2, 3}
        Dim gains() As Integer
        gains = New Integer() {0, 0, 0, 0}
        Dim scanRate As Double = 250.0F
        Dim voltages(4095, 3) As Single
        Dim stateIOout(4095) As Integer
        Dim ljScanBacklog As Long = -1
        Dim overVoltage As Long = -1
        Dim numIts As Long = 5
        Dim i As Long
        Dim k As Long
        Dim junk As Long
        Dim numScans As Long = 250
        Dim timeout As Long = 10

        ' Start the scanning
        idnum = -1
        err = lj.LabJack.AIStreamStart(idnum, demo, 0, 0, 1, numChannels, channels, gains, scanRate, disableCal, 0, 0)
        Console.WriteLine("AIStreamStart error = " + Str(err))
        Console.WriteLine("Local ID = " + Str(idnum))
        Console.WriteLine("")

        i = 0
        While err = 0 And i < numIts

            ' Set all array elements to 0
            clearArray(voltages)
            clearArray(stateIOout)

            ' Read stream
            junk = 0
            err = lj.LabJack.AIStreamRead(idnum, numScans, timeout, voltages, stateIOout, 0, ljScanBacklog, overVoltage)
            Console.WriteLine("AIStreamRead error = " + Str(err))
            Console.WriteLine("1st Scan of Iteration: ")

            For k = 0 To 3
                Console.WriteLine(ControlChars.Tab + Str(voltages(0, k)))
            Next k

            Console.WriteLine("LabJack Scan Backlog = " + Str(ljScanBacklog))
            Console.WriteLine("")

            i = i + 1

        End While

        ' Stop stream
        err = lj.LabJack.AIStreamClear(idnum)
        Console.WriteLine("AIStreamClear error = " + Str(err))

        ' Wait for user to press enter
        Console.ReadLine()

    End Sub

    Sub clearArray(ByRef array(,) As Single)
        Dim i As Integer = 0
        Dim k As Integer = 0
        For i = 0 To array.GetUpperBound(0)
            For k = 0 To array.GetUpperBound(1)
                array(i, k) = 0
            Next k
        Next i
    End Sub

    Sub clearArray(ByRef array() As Integer)
        Dim i As Integer = 0
        For i = 0 To array.GetUpperBound(0)
            array(i) = 0
        Next i
    End Sub
End Module
