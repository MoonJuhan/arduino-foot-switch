// #include <Keyboard.h>

#define PIN 5
#define SWITCH_DOWN 1

void setup()
{
  Serial.begin(9600);
  pinMode(PIN, INPUT);
}

int buttonState;

void loop()
{
  if (buttonState != digitalRead(PIN))
  {
    print(buttonState == SWITCH_DOWN);
  }

  buttonState = digitalRead(PIN);

  delay(100);
}

void print(bool isPrint)
{
  if (isPrint == SWITCH_DOWN)
  {
    Serial.println("PRINT");
    //  Keyboard.press('a');
  }
}