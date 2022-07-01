#define PIN 5

void setup() {
  Serial.begin(9600);
  pinMode(PIN, INPUT);
}

void loop() {
  int buttonState01 = digitalRead(PINPIN);
  
  Serial.print(buttonState01);
  Serial.print("\n"); 
  
  delay(1);
}