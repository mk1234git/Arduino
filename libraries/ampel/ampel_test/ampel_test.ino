/*
  Ampel
 
  
 The circuit:
 * green, orange and read LED attached
 * pushbutton attached
 * 10K resistor attached to pin 2 from ground
 
 */

#include "ampel.h"

Ampel a1(2, 8, 9, 10);

void setup() {
  
}

void loop()
{
  a1.readButton();
  delay(10);  
}
