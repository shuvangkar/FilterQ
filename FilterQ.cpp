#include "FilterQ.h"
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
static void pushData(filterq_t *fq, void *valuePtr);

char testbuf[32];

void printAddr(char *buf, void *ptr)
{
  sprintf(buf," Addr : %p", ptr);
  Serial.println(buf);
}

filterq_t *filterq_create(void *bufPtr,uint8_t varSz, uint8_t bufSz)
{
  filterq_t *fq = malloc(sizeof(filterq_t));
  if (fq != NULL)
  {
    Serial.println(F("Object Memory allocated"));
    printAddr(testbuf,fq);
    fq -> _baseAddr = bufPtr;
    fq -> _varSz = varSz;
    printAddr(testbuf,fq -> _baseAddr);
    fq -> _lastAddr = fq -> _baseAddr + bufSz;

    fq -> _head = fq -> _baseAddr;
    fq -> _tail = fq -> _baseAddr;
    fq -> push = pushData;
  }
  return fq;

}

//Methods
static void pushData(filterq_t *fq, void *valuePtr)
{
  memcpy(fq -> _head, valuePtr, fq -> _varSz);
  printAddr(testbuf,fq -> _head);
  fq -> _head += fq -> _varSz;
  if(fq -> _head == fq -> _lastAddr)
  {
    Serial.println(F("buffer full"));
    fq -> _head = fq -> _baseAddr;
  }
}
