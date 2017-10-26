//Blinks the onboard LED

#include <f401reMap.h>

int a = pinMap(14); //pinMap(Mapped Pin) - for mapped pin refer the attacted image
void setup()
{
  pinMode(a, OUTPUT);
}

void loop()
{
  digitalWrite(a, 1);
  delay(500);
  digitalWrite(a, 0);
  delay(500);
  
}

