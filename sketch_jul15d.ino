
int ledState = LOW;             
unsigned long previousMillis = 0;        
const long interval = 1000;           

void setup() {
   pinMode(13, OUTPUT);
}
void loop() {
  
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
  
    previousMillis = currentMillis;
  
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(13, ledState);
  }
}
