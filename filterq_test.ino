#include "FilterQ.h"

void setup()
 {
   Serial.begin(9600);
   Serial.println(F("Setup done"));

   filterq_t *fq = filterq_create(5, sizeof(uint16_t));
 }

void loop()
 {
  
}
