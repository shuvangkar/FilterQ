#include "FilterQ.h"

uint16_t data[5];
filterq_t *fq;
uint16_t value = 15;
void setup()
 {
   Serial.begin(9600);
   fq = filterq_create(data,sizeof(uint16_t), sizeof(data));
   printAddr(testbuf,data);
   Serial.println(F("Setup done"));
 }

void loop()
{
  fq ->push(fq,value);
  delay(1000);
  fq ->push(fq,value);
  delay(1000);
  fq ->push(fq,value);
  delay(1000);
  fq ->push(fq,value);
  delay(1000);
  fq ->push(fq,value);
  delay(10000);
}
