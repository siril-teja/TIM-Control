Module Module1

    Public Sub Main()
        Dim lngErrorcode As Integer

        Dim lngIDNum As Integer
        Dim sngScanRate As Single
        Dim lngStateIOout(4095) As Integer
        Dim lngOverVoltage As Integer

        Dim alngChannels(3) As Integer
        Dim alngGains(3) As Integer
        Dim asngVoltages(4095, 3) As Single


        Dim cntr As Integer

        Console.WriteLine("Acquiring Data")

        For cntr = 0 To 4095
            asngVoltages(cntr, 0) = 0
            asngVoltages(cntr, 1) = 0
            asngVoltages(cntr, 2) = 0
            asngVoltages(cntr, 3) = 0
            lngStateIOout(cntr) = 0
        Next cntr

        alngChannels(0) = 0
        alngChannels(1) = 1
        alngChannels(2) = 2
        alngChannels(3) = 3
        alngGains(0) = 0
        alngGains(1) = 0
        alngGains(2) = 0
        alngGains(3) = 0

        lngIDNum = -1
        sngScanRate = 2048

        lngErrorcode = lj.LabJack.AIBurst(lngIDNum, 0, 0, 0, 1, 4, alngChannels, alngGains, sngScanRate, 0, 0, 0, 1024, 10, asngVoltages, lngStateIOout, lngOverVoltage, 0)

        'Displaying the last scan's samples
        Console.WriteLine(Str(asngVoltages(1023, 0)))
        Console.WriteLine(Str(asngVoltages(1023, 1)))
        Console.WriteLine(Str(asngVoltages(1023, 2)))
        Console.WriteLine(Str(asngVoltages(1023, 3)))

    End Sub

End Module
