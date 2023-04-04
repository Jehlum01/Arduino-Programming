/*
Created By Majid Majeed
Switching 2 Channel Relay using a Button Pin
*/
const int buttonPin = 7; // the number of the pushbutton pin
const int relay1 = 12; // the number of the relay1 pin
const int relay2 = 13;

// variables will change:
int buttonState = 0; // variable for reading the pushbutton status

void setup() {
// initialize the relay1,2 pins as an output:
pinMode(relay1, OUTPUT);
pinMode(relay2, OUTPUT);
// initialize the pushbutton pin as an input:
pinMode(buttonPin, INPUT);
}

void loop(){
// read the state of the pushbutton value:
buttonState = digitalRead(buttonPin);

// check if the pushbutton is pressed.
// if it is, the buttonState is HIGH:
if (buttonState == HIGH) {
// turn relays on:
digitalWrite(relay1, HIGH);
digitalWrite(relay2, HIGH);
}
else {
// turn relays off:
digitalWrite(relay1, LOW);
digitalWrite(relay2, LOW);
}
}
