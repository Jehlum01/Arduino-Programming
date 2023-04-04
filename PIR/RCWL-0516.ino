

int detectPin = 17;
bool detect = false;
int led = 12;
void setup() {
            Serial.begin(115200); //Intializing the Board with 115200 Baud Rate
  
            Serial.println("Starting....");
            pinMode(detectPin , INPUT);
            pinMode(led , OUTPUT);
            digitalWrite(led , LOW);
             }

void loop()
{
  detect = digitalRead(detectPin); //Checking the Sensor Value 
    if (detect == true)
    {   
    digitalWrite(led , HIGH); // Glowing LED as Signal
    Serial.print("Movement Detected...");
    }
  else{
  digitalWrite(led , LOW);
  Serial.print("Movement Not Detected...");
}
  
delay(1000);
  
}
