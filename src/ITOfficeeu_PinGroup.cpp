/*
 Author: Andreas C. Dyhrberg, www.itoffice.eu 
*/

 /* Just started to put code into the file - not finished at all */

#include "Arduino.h"
#include "ITOfficeeu_PinGroup.h"


void ITO_PinGroup::begin( uint8_t pinGroup[], uint8_t pinGroupSize )
{
  //memcpy( _pinGroup, pinGroup, pinGroupSize );

  for ( int i = 0; i < pinGroupSize; ++i ) {
    _pinGroup[i] = pinGroup[i];
    pinMode(_pinGroup[i], OUTPUT);
    //Serial.printf (i) ;
    //Serial.printf (‘\r\n’) ;
  }
}

void ITO_PinGroup::pinIndexOn(uint8_t indexNumber)
{
  digitalWrite(_pinGroup[indexNumber], HIGH);
}

void ITO_PinGroup::pinOn(uint8_t pinNumber)
{
  uint8_t indexNumber = indexOfPin(pinNumber);
  digitalWrite(_pinGroup[indexNumber], HIGH);
}

void ITO_PinGroup::pinIndexOff(uint8_t indexNumber)
{
  digitalWrite(_pinGroup[indexNumber], LOW);
}

void ITO_PinGroup::pinOff(uint8_t pinNumber)
{
  uint8_t indexNumber = indexOfPin(pinNumber);
  digitalWrite(_pinGroup[indexNumber], LOW);
}

uint8_t ITO_PinGroup::indexOfPin(uint8_t pinNumber)
{
  uint8_t pinIndex = -1;
  for (uint8_t i=0; i<pinGroupSize; i++) {
     if (pinNumber = _pinGroup[i]) {
       pinIndex = i;
       break;
     }
  }
  return pinIndex;
}

/* TODO - To be implemented
uint8_t ITO_PinGroup::pinStatus()
{
  return digitalRead(_pinNumber);
}

   for ( int j = 0; j < 10; ++j ) // output each array element's value {
      Serial.print (n[j]) ;
      Serial.print (‘\r’) ;
   } 

*/
