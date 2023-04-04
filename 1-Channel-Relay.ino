/* Interfacing Relay with Arduino Nano/UNO/MEGA*/

const int buttonPin = 7; // the number of the pushbutton pin
const int relay1 = 13; // the number of the relay1 pin

// variables will change:
int buttonState = 0; // variable for reading the pushbutton status

void setup() {
// initialize the relay pin as an output:
pinMode(relay1, OUTPUT);
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

}
else {
// turn relays off:
digitalWrite(relay1, LOW);

}
}
