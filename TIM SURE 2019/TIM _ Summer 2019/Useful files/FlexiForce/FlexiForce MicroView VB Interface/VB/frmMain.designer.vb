<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class mainForm
    Inherits System.Windows.Forms.Form

    'Das Formular überschreibt den Löschvorgang, um die Komponentenliste zu bereinigen.
    <System.Diagnostics.DebuggerNonUserCode()>
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Wird vom Windows Form-Designer benötigt.
    Private components As System.ComponentModel.IContainer

    'Hinweis: Die folgende Prozedur ist für den Windows Form-Designer erforderlich.
    'Das Bearbeiten ist mit dem Windows Form-Designer möglich.  
    'Das Bearbeiten mit dem Code-Editor ist nicht möglich.
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(mainForm))
        Dim ChartArea1 As System.Windows.Forms.DataVisualization.Charting.ChartArea = New System.Windows.Forms.DataVisualization.Charting.ChartArea()
        Dim Series1 As System.Windows.Forms.DataVisualization.Charting.Series = New System.Windows.Forms.DataVisualization.Charting.Series()
        Me.SerialPort1 = New System.IO.Ports.SerialPort(Me.components)
        Me.tbRx = New System.Windows.Forms.TextBox()
        Me.btnClear = New System.Windows.Forms.Button()
        Me.Label_Rx = New System.Windows.Forms.Label()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.picDataReceived = New System.Windows.Forms.PictureBox()
        Me.Label_CCecho = New System.Windows.Forms.Label()
        Me.Timer1 = New System.Windows.Forms.Timer(Me.components)
        Me.Chart1 = New System.Windows.Forms.DataVisualization.Charting.Chart()
        Me.PictureBox1 = New System.Windows.Forms.PictureBox()
        Me.PictureBox2 = New System.Windows.Forms.PictureBox()
        Me.Label_port = New System.Windows.Forms.Label()
        Me.cboComPort = New System.Windows.Forms.ComboBox()
        Me.Label_Baud = New System.Windows.Forms.Label()
        Me.cboBaudRate = New System.Windows.Forms.ComboBox()
        Me.Label_COMasigns = New System.Windows.Forms.Label()
        Me.btnComOpen = New System.Windows.Forms.Button()
        Me.btnComClose = New System.Windows.Forms.Button()
        Me.picOpen = New System.Windows.Forms.PictureBox()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.PictureBox3 = New System.Windows.Forms.PictureBox()
        Me.BtnCalibrate = New System.Windows.Forms.Button()
        Me.BtnRecord = New System.Windows.Forms.Button()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.RadioButton1 = New System.Windows.Forms.RadioButton()
        Me.RadioButton2 = New System.Windows.Forms.RadioButton()
        Me.PictureBox4 = New System.Windows.Forms.PictureBox()
        CType(Me.picDataReceived, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Chart1, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox2, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picOpen, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox3, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox4, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'SerialPort1
        '
        Me.SerialPort1.PortName = "COM2"
        Me.SerialPort1.ReceivedBytesThreshold = 30
        '
        'tbRx
        '
        Me.tbRx.Font = New System.Drawing.Font("Courier New", 36.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.tbRx.Location = New System.Drawing.Point(106, 61)
        Me.tbRx.Margin = New System.Windows.Forms.Padding(4)
        Me.tbRx.Name = "tbRx"
        Me.tbRx.Size = New System.Drawing.Size(153, 75)
        Me.tbRx.TabIndex = 1
        Me.tbRx.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'btnClear
        '
        Me.btnClear.Location = New System.Drawing.Point(91, 157)
        Me.btnClear.Margin = New System.Windows.Forms.Padding(4)
        Me.btnClear.Name = "btnClear"
        Me.btnClear.Size = New System.Drawing.Size(76, 25)
        Me.btnClear.TabIndex = 4
        Me.btnClear.Text = "Clear"
        Me.btnClear.UseVisualStyleBackColor = True
        '
        'Label_Rx
        '
        Me.Label_Rx.AutoSize = True
        Me.Label_Rx.Font = New System.Drawing.Font("Times New Roman", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label_Rx.Location = New System.Drawing.Point(64, 34)
        Me.Label_Rx.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label_Rx.Name = "Label_Rx"
        Me.Label_Rx.Size = New System.Drawing.Size(230, 23)
        Me.Label_Rx.TabIndex = 5
        Me.Label_Rx.Text = "FlexiForce Output (0-255)"
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(192, 157)
        Me.btnExit.Margin = New System.Windows.Forms.Padding(4)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(80, 25)
        Me.btnExit.TabIndex = 7
        Me.btnExit.Text = "Exit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'picDataReceived
        '
        Me.picDataReceived.BackColor = System.Drawing.SystemColors.Control
        Me.picDataReceived.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.picDataReceived.InitialImage = CType(resources.GetObject("picDataReceived.InitialImage"), System.Drawing.Image)
        Me.picDataReceived.Location = New System.Drawing.Point(221, 208)
        Me.picDataReceived.Margin = New System.Windows.Forms.Padding(4)
        Me.picDataReceived.Name = "picDataReceived"
        Me.picDataReceived.Size = New System.Drawing.Size(25, 24)
        Me.picDataReceived.TabIndex = 16
        Me.picDataReceived.TabStop = False
        '
        'Label_CCecho
        '
        Me.Label_CCecho.AutoSize = True
        Me.Label_CCecho.Location = New System.Drawing.Point(115, 210)
        Me.Label_CCecho.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label_CCecho.Name = "Label_CCecho"
        Me.Label_CCecho.Size = New System.Drawing.Size(101, 17)
        Me.Label_CCecho.TabIndex = 17
        Me.Label_CCecho.Text = "Data Received"
        '
        'Timer1
        '
        Me.Timer1.Interval = 1000
        '
        'Chart1
        '
        Me.Chart1.BorderlineColor = System.Drawing.Color.Black
        Me.Chart1.BorderlineDashStyle = System.Windows.Forms.DataVisualization.Charting.ChartDashStyle.Solid
        ChartArea1.Name = "ChartArea1"
        Me.Chart1.ChartAreas.Add(ChartArea1)
        Me.Chart1.Location = New System.Drawing.Point(368, 135)
        Me.Chart1.Name = "Chart1"
        Series1.ChartArea = "ChartArea1"
        Series1.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line
        Series1.Name = "Series1"
        Me.Chart1.Series.Add(Series1)
        Me.Chart1.Size = New System.Drawing.Size(429, 300)
        Me.Chart1.TabIndex = 18
        Me.Chart1.Text = "Chart1"
        '
        'PictureBox1
        '
        Me.PictureBox1.ErrorImage = CType(resources.GetObject("PictureBox1.ErrorImage"), System.Drawing.Image)
        Me.PictureBox1.Image = CType(resources.GetObject("PictureBox1.Image"), System.Drawing.Image)
        Me.PictureBox1.InitialImage = CType(resources.GetObject("PictureBox1.InitialImage"), System.Drawing.Image)
        Me.PictureBox1.Location = New System.Drawing.Point(503, 12)
        Me.PictureBox1.Name = "PictureBox1"
        Me.PictureBox1.Size = New System.Drawing.Size(176, 102)
        Me.PictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBox1.TabIndex = 19
        Me.PictureBox1.TabStop = False
        '
        'PictureBox2
        '
        Me.PictureBox2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.PictureBox2.Location = New System.Drawing.Point(12, 270)
        Me.PictureBox2.Name = "PictureBox2"
        Me.PictureBox2.Size = New System.Drawing.Size(342, 128)
        Me.PictureBox2.TabIndex = 22
        Me.PictureBox2.TabStop = False
        '
        'Label_port
        '
        Me.Label_port.AutoSize = True
        Me.Label_port.Location = New System.Drawing.Point(13, 321)
        Me.Label_port.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label_port.Name = "Label_port"
        Me.Label_port.Size = New System.Drawing.Size(50, 17)
        Me.Label_port.TabIndex = 0
        Me.Label_port.Text = "  Port :"
        '
        'cboComPort
        '
        Me.cboComPort.FormattingEnabled = True
        Me.cboComPort.Items.AddRange(New Object() {"COM1", "COM2", "COM3", "COM4"})
        Me.cboComPort.Location = New System.Drawing.Point(65, 317)
        Me.cboComPort.Margin = New System.Windows.Forms.Padding(4)
        Me.cboComPort.Name = "cboComPort"
        Me.cboComPort.Size = New System.Drawing.Size(85, 24)
        Me.cboComPort.TabIndex = 8
        '
        'Label_Baud
        '
        Me.Label_Baud.AutoSize = True
        Me.Label_Baud.Location = New System.Drawing.Point(159, 321)
        Me.Label_Baud.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label_Baud.Name = "Label_Baud"
        Me.Label_Baud.Size = New System.Drawing.Size(45, 17)
        Me.Label_Baud.TabIndex = 9
        Me.Label_Baud.Text = "Baud:"
        '
        'cboBaudRate
        '
        Me.cboBaudRate.FormattingEnabled = True
        Me.cboBaudRate.Items.AddRange(New Object() {"9600", "38400", "115200"})
        Me.cboBaudRate.Location = New System.Drawing.Point(210, 317)
        Me.cboBaudRate.Margin = New System.Windows.Forms.Padding(4)
        Me.cboBaudRate.Name = "cboBaudRate"
        Me.cboBaudRate.Size = New System.Drawing.Size(87, 24)
        Me.cboBaudRate.TabIndex = 10
        '
        'Label_COMasigns
        '
        Me.Label_COMasigns.AutoSize = True
        Me.Label_COMasigns.Location = New System.Drawing.Point(306, 321)
        Me.Label_COMasigns.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label_COMasigns.Name = "Label_COMasigns"
        Me.Label_COMasigns.Size = New System.Drawing.Size(34, 17)
        Me.Label_COMasigns.TabIndex = 11
        Me.Label_COMasigns.Text = "8N1"
        '
        'btnComOpen
        '
        Me.btnComOpen.Location = New System.Drawing.Point(47, 358)
        Me.btnComOpen.Margin = New System.Windows.Forms.Padding(4)
        Me.btnComOpen.Name = "btnComOpen"
        Me.btnComOpen.Size = New System.Drawing.Size(119, 25)
        Me.btnComOpen.TabIndex = 12
        Me.btnComOpen.Text = "Open Port"
        Me.btnComOpen.UseVisualStyleBackColor = True
        '
        'btnComClose
        '
        Me.btnComClose.Location = New System.Drawing.Point(174, 358)
        Me.btnComClose.Margin = New System.Windows.Forms.Padding(4)
        Me.btnComClose.Name = "btnComClose"
        Me.btnComClose.Size = New System.Drawing.Size(108, 25)
        Me.btnComClose.TabIndex = 13
        Me.btnComClose.Text = "Close Port"
        Me.btnComClose.UseVisualStyleBackColor = True
        '
        'picOpen
        '
        Me.picOpen.BackColor = System.Drawing.SystemColors.Control
        Me.picOpen.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.picOpen.InitialImage = CType(resources.GetObject("picOpen.InitialImage"), System.Drawing.Image)
        Me.picOpen.Location = New System.Drawing.Point(302, 358)
        Me.picOpen.Margin = New System.Windows.Forms.Padding(4)
        Me.picOpen.Name = "picOpen"
        Me.picOpen.Size = New System.Drawing.Size(25, 24)
        Me.picOpen.TabIndex = 14
        Me.picOpen.TabStop = False
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(100, 283)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(162, 17)
        Me.Label1.TabIndex = 20
        Me.Label1.Text = "Serial Port Configuration"
        '
        'PictureBox3
        '
        Me.PictureBox3.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.PictureBox3.Location = New System.Drawing.Point(12, 12)
        Me.PictureBox3.Name = "PictureBox3"
        Me.PictureBox3.Size = New System.Drawing.Size(342, 242)
        Me.PictureBox3.TabIndex = 23
        Me.PictureBox3.TabStop = False
        '
        'BtnCalibrate
        '
        Me.BtnCalibrate.Location = New System.Drawing.Point(126, 431)
        Me.BtnCalibrate.Margin = New System.Windows.Forms.Padding(4)
        Me.BtnCalibrate.Name = "BtnCalibrate"
        Me.BtnCalibrate.Size = New System.Drawing.Size(94, 25)
        Me.BtnCalibrate.TabIndex = 24
        Me.BtnCalibrate.Text = "Calibrate"
        Me.BtnCalibrate.UseVisualStyleBackColor = True
        '
        'BtnRecord
        '
        Me.BtnRecord.Location = New System.Drawing.Point(24, 431)
        Me.BtnRecord.Margin = New System.Windows.Forms.Padding(4)
        Me.BtnRecord.Name = "BtnRecord"
        Me.BtnRecord.Size = New System.Drawing.Size(94, 25)
        Me.BtnRecord.TabIndex = 25
        Me.BtnRecord.Text = "Record"
        Me.BtnRecord.UseVisualStyleBackColor = True
        '
        'Button1
        '
        Me.Button1.Font = New System.Drawing.Font("Microsoft Sans Serif", 16.2!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Button1.Location = New System.Drawing.Point(293, 166)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(263, 139)
        Me.Button1.TabIndex = 26
        Me.Button1.Text = "Reading Sensor - Please Wait"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Times New Roman", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.Location = New System.Drawing.Point(499, 442)
        Me.Label2.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(190, 23)
        Me.Label2.TabIndex = 27
        Me.Label2.Text = "RECORDING DATA"
        Me.Label2.Visible = False
        '
        'RadioButton1
        '
        Me.RadioButton1.AutoSize = True
        Me.RadioButton1.Location = New System.Drawing.Point(233, 422)
        Me.RadioButton1.Name = "RadioButton1"
        Me.RadioButton1.Size = New System.Drawing.Size(88, 21)
        Me.RadioButton1.TabIndex = 30
        Me.RadioButton1.TabStop = True
        Me.RadioButton1.Text = "Linear Fit"
        Me.RadioButton1.UseVisualStyleBackColor = True
        '
        'RadioButton2
        '
        Me.RadioButton2.AutoSize = True
        Me.RadioButton2.Location = New System.Drawing.Point(233, 449)
        Me.RadioButton2.Name = "RadioButton2"
        Me.RadioButton2.Size = New System.Drawing.Size(116, 21)
        Me.RadioButton2.TabIndex = 31
        Me.RadioButton2.TabStop = True
        Me.RadioButton2.Text = "Power Law Fit"
        Me.RadioButton2.UseVisualStyleBackColor = True
        '
        'PictureBox4
        '
        Me.PictureBox4.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.PictureBox4.Location = New System.Drawing.Point(12, 412)
        Me.PictureBox4.Name = "PictureBox4"
        Me.PictureBox4.Size = New System.Drawing.Size(342, 64)
        Me.PictureBox4.TabIndex = 33
        Me.PictureBox4.TabStop = False
        '
        'mainForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 16.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(812, 496)
        Me.Controls.Add(Me.RadioButton2)
        Me.Controls.Add(Me.RadioButton1)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.BtnRecord)
        Me.Controls.Add(Me.BtnCalibrate)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.picOpen)
        Me.Controls.Add(Me.btnComClose)
        Me.Controls.Add(Me.PictureBox1)
        Me.Controls.Add(Me.btnComOpen)
        Me.Controls.Add(Me.Chart1)
        Me.Controls.Add(Me.Label_COMasigns)
        Me.Controls.Add(Me.Label_CCecho)
        Me.Controls.Add(Me.cboBaudRate)
        Me.Controls.Add(Me.Label_Baud)
        Me.Controls.Add(Me.picDataReceived)
        Me.Controls.Add(Me.cboComPort)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.Label_port)
        Me.Controls.Add(Me.Label_Rx)
        Me.Controls.Add(Me.btnClear)
        Me.Controls.Add(Me.tbRx)
        Me.Controls.Add(Me.PictureBox2)
        Me.Controls.Add(Me.PictureBox3)
        Me.Controls.Add(Me.PictureBox4)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D
        Me.Margin = New System.Windows.Forms.Padding(4)
        Me.Name = "mainForm"
        Me.Text = "FlexiForce MicroView Demo "
        CType(Me.picDataReceived, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Chart1, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox2, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picOpen, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox3, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox4, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents btnClear As System.Windows.Forms.Button
    Friend WithEvents Label_Rx As System.Windows.Forms.Label
    Friend WithEvents SerialPort1 As System.IO.Ports.SerialPort
    Public WithEvents tbRx As System.Windows.Forms.TextBox
    Friend WithEvents btnExit As System.Windows.Forms.Button
    Friend WithEvents picDataReceived As System.Windows.Forms.PictureBox
    Friend WithEvents Label_CCecho As System.Windows.Forms.Label
    Friend WithEvents Timer1 As System.Windows.Forms.Timer
    Friend WithEvents Chart1 As DataVisualization.Charting.Chart
    Friend WithEvents PictureBox1 As PictureBox
    Friend WithEvents PictureBox2 As PictureBox
    Friend WithEvents PictureBox3 As PictureBox
    Friend WithEvents Label1 As Label
    Friend WithEvents picOpen As PictureBox
    Friend WithEvents btnComClose As Button
    Friend WithEvents btnComOpen As Button
    Friend WithEvents Label_COMasigns As Label
    Friend WithEvents cboBaudRate As ComboBox
    Friend WithEvents Label_Baud As Label
    Friend WithEvents cboComPort As ComboBox
    Friend WithEvents Label_port As Label
    Friend WithEvents BtnCalibrate As Button
    Friend WithEvents BtnRecord As Button
    Friend WithEvents Button1 As Button
    Friend WithEvents Label2 As Label
    Friend WithEvents RadioButton1 As RadioButton
    Friend WithEvents RadioButton2 As RadioButton
    Friend WithEvents PictureBox4 As PictureBox
End Class
