//This code for gate human counter.
//Follow me on github- https://github.com/UttamBasu
// Define the pin for input and output indicator

const int  buttonPin = 4;    // the pin that the pushbutton is attached to
const int ledPin = 13;       // the pin that the LED is attached to

int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() 
{
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
  buttonState = digitalRead(buttonPin);   // read the pushbutton input pin

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) 
  {
    if (buttonState == HIGH)            // if the state has changed, increment the counter
    {
      buttonPushCounter++;
      Serial.print("Number of People come Inside: ");
      Serial.println(buttonPushCounter);
    } 
    else 
    {
      
    }
    delay(100);
  }
  lastButtonState = buttonState;        // save the current state as the last state

//Do someting you want to do. Such as LED will be high every time when  people come.
  if (buttonPushCounter % 5 == 0) 
  {
    digitalWrite(ledPin, HIGH);
  } else 
  {
    digitalWrite(ledPin, LOW);
  }
}
//Similarly you can do for Exit gate and at last get the information that how many people are still inside the room.
