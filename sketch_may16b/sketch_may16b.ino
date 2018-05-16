// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;
// variables will change:

void setup() {
  // initialize the LED pin as an output:
 
   pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
 int buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
delay(1);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
     
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off: 
    digitalWrite(ledPin, LOW);
   
  
  }
}
