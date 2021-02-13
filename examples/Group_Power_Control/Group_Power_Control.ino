#include <ITOfficeeu_PinGroup.h>

ITO_PinGroup powerGroup; /* You can change the name 'powerGroup' to whatever you like. Just do it all the way through your program */

#define PINS_GROUP_SIZE 4 /* Select the number of pins you like to group. Must correspond to what you put into pinsGroup[] = {...}. */
//                      Index number:  0,  1,  2,  3, and upwards ...
uint8_t pinsGroup[PINS_GROUP_SIZE] = {36, 25, 23, 22}; /* Your selection of pins you want to group. Select the order as you like it. */

void setup()
{
  Serial.begin(115200);
  Serial.println("Starting the program.");

  powerGroup.begin(pinsGroup, PINS_GROUP_SIZE);  /* Set the initial configuration for the group of power pins */

  /* Using index numbers for manipulations in your program, gives you a abstraction layer 
   * that makes future change of settings straight forward. */
  powerGroup.pinIndexOn(2);  // Turn pin 23 on - one way to do it
  powerGroup.pinOn(22);      // Turn pin 22 on - another way to do it

  delay(1000);
}

// Toggle the power on and off to show the effect.
void loop()
{
  powerGroup.pinIndexOn(2);  // Turn pin 23 on - one way to do it
  powerGroup.pinOn(22);      // Turn pin 22 on - another way
  delay(1000);

  powerGroup.pinIndexOff(2);  // Turn pin 23 on - one way
  powerGroup.pinOff(22);      // Turn pin 22 on - another way
  delay(1000);
}
