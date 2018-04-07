#include "SoundData.h"

#define fs  8000  //sample rate in Hz

volatile uint32_t isrCounter = 0;

void setup()
{
}
 
void loop()
{
   float dt =  1000000 / fs;
   isrCounter++;
   if (isrCounter > sizeof(pacman)) { // hardcoded end...
        isrCounter = 0;
        delay(1000);
    }
  dacWrite(25, pacman[isrCounter]);
  delayMicroseconds(dt);
}
