#include <MicroView.h>      // include MicroView library

MicroViewWidget *widget;    // create widget pointer

int Switch1Pin = A5;         // push button pin
int Switch2Pin = A4;         // push button pin

int Switch1State = 0;        // variable to store the pushbutton status
int Switch2State = 0;        // variable to store the pushbutton status

int sensorPin = A1;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int TareValue = 0;
int DataCounter = 0;

void setup()
{
  digitalWrite(sensorPin, HIGH);    // Internal Pull-up
  pinMode(sensorPin, INPUT);      // make pin as INPUT
  
  digitalWrite(Switch1Pin,HIGH);   // set Internal pull-up
  pinMode(Switch1Pin, INPUT);      // initialize the pushbutton pin as an input
  
  
  uView.begin();            // start MicroView
  uView.clear(PAGE);          // clear page

  // Draw Logo
  uView.line(5,28,33,0);
  uView.line(33,0,61,28);
  uView.line(61,28,5,28);
  uView.line(26,10,40,10);
  uView.line(40,10,33,17);
  uView.line(33,17,26,10);
  uView.line(5,28,32,16);
  uView.line(34,16,61,28);

  uView.setFontType(0); 
  uView.setCursor(11,30); 
  uView.print("Tekscan");

  uView.setCursor(3,40); 
  uView.print("FlexiForce");

  uView.display();

  Switch1State = digitalRead(Switch1Pin);   // read the state of the pushbutton value
  Switch2State = digitalRead(Switch2Pin);   // read the state of the pushbutton value
  while (Switch1State == HIGH & Switch2State == HIGH)
    {
         delay(1);
         Switch1State = digitalRead(Switch1Pin);
         Switch2State = digitalRead(Switch2Pin);
      
    }
   while (Switch1State == LOW)
    {
        delay(1);
        Switch1State = digitalRead(Switch1Pin);
    }
  

  uView.clear(PAGE);

  // Start Meter Display
  widget = new MicroViewGauge(32, 24, 0, 255, WIDGETSTYLE1);
  
  uView.display();          // display the content in the screen buffer
  Serial.begin(9600);           // set up Serial library at 9600 bps
}

void loop()
{

    Switch1State = digitalRead(Switch1Pin);   // read the state of the pushbutton value

    // check if the pushbutton is pressed.
    // if it is not pressed, the button is HIGH:
    if (Switch1State == LOW) 
    {   
        uView.clear(PAGE);          // clear page  
        
        while (Switch1State == LOW)
          {
            uView.setCursor(15,20);       // set cursor at 0,0
            uView.print("Taring");         // print ON
            uView.display();
            Switch1State = digitalRead(Switch1Pin); 
            sensorValue = analogRead(sensorPin);  // read sensorPin
          }
         TareValue = sensorValue;
         uView.clear(PAGE); 
         widget = new MicroViewGauge(32, 24, 0, 255, WIDGETSTYLE1);
    } 
    else 
    { 
        sensorValue = analogRead(sensorPin);  // read sensorPin
        sensorValue =sensorValue - TareValue;
        if (sensorValue < 0)
          {
          sensorValue = 0;  
          }
        if (sensorValue > 255)
          {
          sensorValue = 255;  
          }  
        widget->setValue(sensorValue);      // set value of sensorPin to widget
        uView.display();            // display the content in the screen buffer
        DataCounter = DataCounter + 1;
        if (DataCounter > 36)  // gives ~ 10 Hz output
        { 
          Serial.println(sensorValue);
          DataCounter = 0;
        }
    }
}



