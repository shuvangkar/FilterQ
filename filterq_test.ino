#include "FilterQ.h"

uint16_t data[5];
void setup()
 {
   Serial.begin(9600);
   filterq_t *fq = filterq_create(data,sizeof(uint16_t), sizeof(data));
   printAddr(testbuf,data);
   Serial.println(F("Setup done"));
 }

void loop()
 {
  
}
