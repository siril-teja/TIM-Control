Option Strict On
Option Infer On
Imports System.Windows.Forms.DataVisualization.Charting
Imports System.IO
Imports System.Reflection

Public Class mainForm

    Private readBuffer As String = String.Empty
    Private Bytenumber As Integer
    Private ByteToRead As Integer
    Private byteEnd(2) As Char
    Private comOpen As Boolean
    Public SensorValue As Decimal
    Public SampleNumber As Decimal
    Public SensorSum As Decimal
    Public i As Integer
    Public TempSeries As New Series
    Public SensorCalibrated As Boolean
    Public SensorUnits As String = "Raw"
    Public CalPoint1 As Decimal
    Public CalPoint2 As Decimal
    Public CalPoint3 As Decimal
    Public RawValue1 As Integer
    Public RawValue2 As Integer
    Public RawValue3 As Integer
    Public CalSlope As Decimal = 1
    Public CalIntercept As Decimal = 0
    Public CalMaxValue As Decimal = 255
    Public CalMultiplier As Double = 1
    Public CalExponent As Double = 1
    Public NumRecordPoints As Int16
    Public NumRecordedPoints As Int16
    Public RecordState As Boolean = False
    Public FileWriter As StreamWriter ' define the stream writer
    Public NumCalPoints As Integer = 3


#Region "form events"

    ''' close application and COM Port

    Private Sub Form1_FormClosed(ByVal sender As System.Object,
                                 ByVal e As System.Windows.Forms.FormClosedEventArgs) _
                                 Handles MyBase.FormClosed

        If comOpen Then SerialPort1.Close()
    End Sub

    Private Sub Form1_FormClosing(ByVal sender As System.Object, ByVal e As System.Windows.Forms.FormClosingEventArgs) _
     Handles MyBase.FormClosing

        Dim messageBoxVB As New System.Text.StringBuilder()

        messageBoxVB.AppendLine("     Closing Demo")

        MessageBox.Show(messageBoxVB.ToString(), "FlexiForce")


    End Sub


    ''' open Windows Form

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim response As Object
        Dim style = MsgBoxStyle.OkCancel Or MsgBoxStyle.DefaultButton2 Or MsgBoxStyle.Exclamation

        '              Check to be sure MicroView FlexiForce hardware is connected
        response = MsgBox("Please check that FlexiForce MicroView hardware is connected to PC via USB.", style, "FlexiForce Hardware")

        If CInt(response) <> 1 Then End 'Quit program unless User selected "OK"

        ' read avaiable COM Ports:
        Dim Portnames As String() = System.IO.Ports.SerialPort.GetPortNames
        If Portnames Is Nothing Then
            MsgBox("There are no Com Ports detected!")
            Me.Close()
        End If
        cboComPort.Items.AddRange(Portnames)
        cboComPort.Text = Portnames(0)
        cboBaudRate.Text = "9600"
        'cboBaudRate.Text = "115200"
        Button1.Visible = False
        SensorCalibrated = False
        RadioButton1.Select()
    End Sub


    ''' Open Com Port 

    Private Sub btnComOpen_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnComOpen.Click

        ' device params
        With SerialPort1

            .ParityReplace = &H3B                    ' replace ";" when parity error occurs
            .PortName = cboComPort.Text
            .BaudRate = CInt(cboBaudRate.Text)
            .Parity = IO.Ports.Parity.None
            .DataBits = 8
            .StopBits = IO.Ports.StopBits.One
            .Handshake = IO.Ports.Handshake.None
            .RtsEnable = False
            .ReceivedBytesThreshold = 1             'threshold: one byte in buffer > event is fired
            .NewLine = vbCr         ' CR must be the last char in frame. This terminates the SerialPort.readLine
            .ReadTimeout = 500

        End With

        ' check whether device is avaiable:
        Try
            SerialPort1.Open()
            comOpen = SerialPort1.IsOpen
        Catch ex As Exception
            comOpen = False
            MsgBox("Error Open: " & ex.Message)
            picOpen.BackColor = Color.Red
        End Try

        If comOpen Then
            picOpen.BackColor = Color.Green
            cboComPort.Enabled = False
            cboBaudRate.Enabled = False
            SampleNumber = 0
            TempSeries.Points.Clear()
            SampleNumber = 1
        End If

    End Sub


    ''' close ComPort

    Private Sub Button_Close_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnComClose.Click
        Dim response As Object

        Dim style = MsgBoxStyle.YesNo Or MsgBoxStyle.DefaultButton2 Or MsgBoxStyle.Exclamation

        response = MsgBox("Close Comm Port?", style, "Close Comm")
        If CInt(response) = 6 Then 'User entered "Yes"
            If comOpen Then
                ' clear input buffer
                SerialPort1.DiscardInBuffer()
                SerialPort1.Close()
            End If
            comOpen = False
            picOpen.BackColor = Color.Red
            picDataReceived.BackColor = Color.Gray
            cboComPort.Enabled = True
            cboBaudRate.Enabled = True
        End If
    End Sub


    ''' clear TextBoxes

    Private Sub Button_clear_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClear.Click
        tbRx.Text = String.Empty
        TempSeries.Points.Clear()
        SampleNumber = 1
    End Sub


    ''' Record

    Private Sub Button_Record_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles BtnRecord.Click
        Dim myValue As Object
        Dim FlexiFilename As String
        ' Import System.Reflection and System.IO at the top of your class file
        Dim location = Assembly.GetExecutingAssembly().Location
        Dim appPath = Path.GetDirectoryName(location)

        myValue = InputBox("Enter # of Data Points to Record (600 MAX)", "# Datas Points", "0")
        If myValue Is "" Then Return
        NumRecordPoints = CShort(CDbl(myValue))
        If NumRecordPoints > 600 Then NumRecordPoints = 600

        myValue = InputBox("Enter recording filename", "Record Filename", appPath & "\FlexiForceDataFile.txt")
        If myValue Is "" Then Return

        FlexiFilename = CStr(myValue)

        Dim style = MsgBoxStyle.OkCancel Or MsgBoxStyle.DefaultButton1 Or MsgBoxStyle.Exclamation
        Dim response = MsgBox("Hit OK to Start Recording", style, "Record Data")

        If response = MsgBoxResult.Cancel Then Return


        NumRecordedPoints = 0
        Label2.Visible = True
        RecordState = True
        ' Open the File for writing
        FileWriter = New StreamWriter(FlexiFileName, False)
        ' Write Header Info
        FileWriter.WriteLine("FlexiForce MicroView Demo - Recorded Data")
        If SensorCalibrated Then
            If RadioButton1.Checked Then
                FileWriter.WriteLine("Calibration Type = Linear Fit (y = aX + b)")
                FileWriter.WriteLine("Slope = " & Str(CalSlope))
                FileWriter.WriteLine("Intercept = " & Str(CalIntercept))
            Else
                FileWriter.WriteLine("Calibration Type = Power Law Fit (y = aX^b)")
                FileWriter.WriteLine("Multiplier = " & Str(CalMultiplier))
                FileWriter.WriteLine("Exponent = " & Str(CalExponent))
            End If
        Else
            FileWriter.WriteLine("Calibration Type = <none> (Raw Output)")
            FileWriter.WriteLine("Slope = " & Str(CalSlope))
            FileWriter.WriteLine("Intercept = " & Str(CalIntercept))
        End If

        FileWriter.WriteLine("Calibration Units = " & SensorUnits)
        FileWriter.WriteLine("Recorded Data:")
    End Sub


    ''' close app

    Private Sub Button_end_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnExit.Click
        If comOpen Then
            ' clear input buffer
            SerialPort1.DiscardInBuffer()
            SerialPort1.Close()
        End If
        comOpen = False
        Me.Close()
    End Sub

    ''' Calibrate

    Private Sub Button_Calibrate_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles BtnCalibrate.Click
        Dim myValue As Object
        Dim i As Integer
        Dim j As Integer
        Dim response As Object
        Dim style = MsgBoxStyle.YesNo Or MsgBoxStyle.DefaultButton2 Or MsgBoxStyle.Exclamation

        RawValue1 = 0
        RawValue2 = 0
        RawValue3 = 0
        CalPoint1 = 0
        CalPoint2 = 0
        CalPoint3 = 0

        If RadioButton1.Checked = True Then
            '                                    Linear Calibration  (Y = aX + b)
            response = MsgBox("Calibrate Sensor? (Linear)", style, "FlexiForce Calibration")
        Else
            '                                    Power Law Calibration (Y = aX^b)
            response = MsgBox("Calibrate Sensor? (Power Law)", style, "FlexiForce Calibration")
        End If

        If CInt(response) = 6 Then   'User responded - "Yes"

            CalSlope = 1
            CalIntercept = 0
            CalMultiplier = 1
            CalExponent = 1
            CalMaxValue = 255

            Label_Rx.Text = "FlexiForce Output (0 - 255)"
            SensorCalibrated = False

            If RadioButton1.Checked = True Then
                myValue = InputBox("Enter # of Calibration Points (1 to 3)", "# Data Points", CStr(NumCalPoints))
                If myValue Is "" Then Return
                NumCalPoints = CInt(myValue)
                If NumCalPoints < 1 Then NumCalPoints = 1
                If NumCalPoints > 3 Then NumCalPoints = 3
            End If

            SensorUnits = InputBox("Enter Units for Calibrated Values (Pounds, Grams, etc.)", "Calibration Units")
            If SensorUnits Is "" Then Return

            myValue = InputBox("Enter Value (in " & SensorUnits & ") for 1st Calibration Point", "1st Point", "0")
            If myValue Is "" Then Return
            CalPoint1 = CDec(myValue)
            Button1.Visible = True
            Dim response2 = MsgBox("Apply Load = " & CStr(myValue) & " " & SensorUnits & " - Hit OK When Ready", MsgBoxStyle.OkCancel, "Point #1")
            If response2 = MsgBoxResult.Cancel Then
                Button1.Visible = False
                Return
            End If

            'delay 5 seconds and then read sensor
            For i = 1 To 100000
                For j = 1 To 10000
                Next
            Next

            tbRx.Text = readBuffer
            RawValue1 = Convert.ToInt16(tbRx.Text)

            MsgBox("  Raw Value 1 =" & Str(RawValue1))

            Button1.Visible = False
            If RadioButton1.Checked = True And NumCalPoints = 1 Then
                NumCalPoints = 2 'assume sensor response goes thru 0,0
                SensorCalibrated = True
                Label_Rx.Text = "FlexiForce Output (" & SensorUnits & ")"
                DetermineCalConstants()
                Return
            End If

            myValue = InputBox("Enter Value (in " & SensorUnits & ") for 2nd Calibration Point", "2nd Point", "0")
            If myValue Is "" Then Return
            CalPoint2 = CDec(myValue)
            Button1.Visible = True
            response2 = MsgBox("Apply Load = " & CStr(myValue) & " " & SensorUnits & " - Hit OK When Ready", MsgBoxStyle.OkCancel, "Point #2")
            If response2 = MsgBoxResult.Cancel Then
                Button1.Visible = False
                Return
            End If
            'delay 5 seconds and then read sensor
            For i = 1 To 100000
                For j = 1 To 10000
                Next
            Next

            tbRx.Text = readBuffer
            RawValue2 = Convert.ToInt16(tbRx.Text)

            MsgBox("  Raw Value 2 =" & Str(RawValue2))

            Button1.Visible = False
            If RadioButton1.Checked = True And NumCalPoints = 2 Then
                SensorCalibrated = True
                Label_Rx.Text = "FlexiForce Output (" & SensorUnits & ")"
                DetermineCalConstants()
                Return
            End If

            myValue = InputBox("Enter Value (in " & SensorUnits & ") for 3rd Calibration Point", "3rd Point", "0")
            If myValue Is "" Then Return
            CalPoint3 = CDec(myValue)
            Button1.Visible = True
            response2 = MsgBox("Apply Load = " & CStr(myValue) & " " & SensorUnits & " - Hit OK When Ready", MsgBoxStyle.OkCancel, "Point #3")
            If response2 = MsgBoxResult.Cancel Then
                Button1.Visible = False
                Return
            End If
            'delay 5 seconds and then read sensor
            For i = 1 To 100000
                For j = 1 To 10000
                Next
            Next

            tbRx.Text = readBuffer
            RawValue3 = Convert.ToInt16(tbRx.Text)

            MsgBox("  Raw Value 3 =" & Str(RawValue3))

            Button1.Visible = False

            SensorCalibrated = True

            Label_Rx.Text = "FlexiForce Output (" & SensorUnits & ")"
            DetermineCalConstants()
        Else
            MsgBox("Exiting Calibration!", , "Calibration")
            SensorCalibrated = False
        End If

    End Sub


    Private Sub DetermineCalConstants()
        Dim SumX As Decimal
        Dim SumY As Decimal
        Dim SumXY As Decimal
        Dim SumXX As Decimal
        Dim LogRawValue1 As Double
        Dim LogRawValue2 As Double
        Dim LogRawValue3 As Double
        Dim LogCalPoint1 As Double
        Dim LogCalPoint2 As Double
        Dim LogCalPoint3 As Double
        Dim LogSumX As Double
        Dim LogSumY As Double
        Dim LogSumXY As Double
        Dim LogSumXX As Double

        If RadioButton1.Checked = True Then
            '                                    Linear Calibration
            SumX = RawValue1 + RawValue2 + RawValue3
            'MsgBox("SumX =" & Str(SumX))
            SumY = CalPoint1 + CalPoint2 + CalPoint3
            'MsgBox("SumY =" & Str(SumY))
            SumXY = RawValue1 * CalPoint1 + RawValue2 * CalPoint2 + RawValue3 * CalPoint3
            'MsgBox("SumXY =" & Str(SumXY))
            SumXX = RawValue1 * RawValue1 + RawValue2 * RawValue2 + RawValue3 * RawValue3
            'MsgBox("SumXX =" & Str(SumXX))
            CalSlope = (NumCalPoints * SumXY - SumX * SumY) / (NumCalPoints * SumXX - SumX * SumX)
            ' MsgBox("CalSlope =" & Str(CalSlope))
            CalIntercept = (SumY * SumXX - SumX * SumXY) / (NumCalPoints * SumXX - SumX * SumX)
            'MsgBox("CalIntercept =" & Str(CalIntercept))
            CalMaxValue = (CalSlope * 255) + CalIntercept
            'MsgBox("CalMax =" & Str(CalMaxValue))
        Else
            '                                Power Law Calibration
            LogRawValue1 = Math.Log(RawValue1)
            LogRawValue2 = Math.Log(RawValue2)
            LogRawValue3 = Math.Log(RawValue3)
            LogCalPoint1 = Math.Log(CalPoint1)
            LogCalPoint2 = Math.Log(CalPoint2)
            LogCalPoint3 = Math.Log(CalPoint3)

            LogSumX = LogRawValue1 + LogRawValue2 + LogRawValue3
            'MsgBox("SumX =" & Str(LogSumX))
            LogSumY = LogCalPoint1 + LogCalPoint2 + LogCalPoint3
            'MsgBox("SumY =" & Str(LogSumY))
            LogSumXY = LogRawValue1 * LogCalPoint1 + LogRawValue2 * LogCalPoint2 + LogRawValue3 * LogCalPoint3
            ' MsgBox("SumXY =" & Str(LogSumXY))
            LogSumXX = LogRawValue1 * LogRawValue1 + LogRawValue2 * LogRawValue2 + LogRawValue3 * LogRawValue3
            'MsgBox("SumXX =" & Str(LogSumXX))

            CalExponent = (3 * LogSumXY - LogSumX * LogSumY) / (3 * LogSumXX - LogSumX * LogSumX)
            'MsgBox("CalExponent =" & Str(CalExponent))

            CalMultiplier = (LogSumY - CalExponent * LogSumX) / 3
            CalMultiplier = Math.Exp(CalMultiplier)
            'MsgBox("CalMultiplier =" & Str(CalMultiplier))

            CalMaxValue = CDec(CalMultiplier * 255 ^ CalExponent)

            'MsgBox("CalMax =" & Str(CalMaxValue))
        End If

    End Sub





#End Region

#Region "ComPort read data"

    ''' async read on secondary thread

    Private Sub SerialPort1_DataReceived(ByVal sender As System.Object,
                                         ByVal e As System.IO.Ports.SerialDataReceivedEventArgs) _
                                         Handles SerialPort1.DataReceived

        If comOpen Then
            Try
                byteEnd = SerialPort1.NewLine.ToCharArray
                '               get number off bytes in buffer
                Bytenumber = SerialPort1.BytesToRead

                readBuffer = SerialPort1.ReadLine()
                '               data to UI thread
                Me.Invoke(New EventHandler(AddressOf DoUpdate))

            Catch ex As Exception
                'MsgBox("read " & ex.Message)
            End Try
        End If
    End Sub


    ''' update received string in UI

    Public Sub DoUpdate(ByVal sender As Object, ByVal e As System.EventArgs)
        Dim test As Double
        If Not comOpen Then Return
        SampleNumber = SampleNumber + 1
        SensorValue = Convert.ToDecimal(readBuffer)
        If RadioButton1.Checked = True Then
            '                                    Linear Calibration
            SensorValue = CalSlope * SensorValue + CalIntercept
        Else
            '                                  Power Law Calibration
            SensorValue = CDec(CalMultiplier * SensorValue ^ CalExponent)
        End If

        tbRx.Text = Convert.ToString(SensorValue)
        SensorGraphChart()
        picDataReceived.BackColor = Color.Green
        If RecordState = True Then
            FileWriter.WriteLine(tbRx.Text)
            NumRecordedPoints = CShort(NumRecordedPoints + 1)
            If NumRecordedPoints >= NumRecordPoints Then
                RecordState = False
                '                        Save and Close File
                FileWriter.Flush() ' optional as close will flush
                FileWriter.Close()
                Label2.Visible = False
            End If
        End If
    End Sub


    Public Sub SensorGraphChart()

        'Dim TempSeries As New Series

        Chart1.Series.Clear()

        'Sets type of Chart  

        TempSeries.ChartType = SeriesChartType.Line


        'Create a new series and add data points to it.  
        TempSeries.Name = "Sensor Values"

        'Change the grid lines to Light gray  

        Chart1.ChartAreas(0).AxisX.MajorGrid.LineColor = Color.LightGray
        Chart1.ChartAreas(0).AxisY.MajorGrid.LineColor = Color.LightGray

        'Sets Chart Title 
        If SampleNumber = 1 Then
            Chart1.Titles.Add("FlexiForce Output")
        End If

        'Sets Y Axis Title 
        If SensorCalibrated Then
            Chart1.ChartAreas(0).AxisY.Title = "Calibrated Output (" & SensorUnits & ")"
        Else
            Chart1.ChartAreas(0).AxisY.Title = "Digital Output (0-255)"
        End If

        Chart1.ChartAreas(0).AxisX.Title = "Sample Number"
        Chart1.ChartAreas(0).AxisY.Maximum = CalMaxValue '255

        If SampleNumber < 150 Then
            Chart1.ChartAreas(0).AxisX.Minimum = 0
            Chart1.ChartAreas(0).AxisX.Maximum = 200
        Else
            Chart1.ChartAreas(0).AxisX.Minimum = SampleNumber - 150
            Chart1.ChartAreas(0).AxisX.Maximum = SampleNumber + 50
        End If

        'plots the Various Values

        TempSeries.Color = Color.Red

        TempSeries.Points.AddXY(SampleNumber, SensorValue)

        'resets AutoValues and resizes chart to the largest value.  
        Chart1.ResetAutoValues()

        'Add the series to the Chart1 control.

        Chart1.Series.Add(TempSeries)


    End Sub



#End Region
End Class
