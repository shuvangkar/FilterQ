#include "FilterQ.h"
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
static void pushData(filterq_t *fq, void *valuePtr);


filterq_t *filterq_create(uint8_t bufLen, uint8_t varLen)
{
  void *_baseAddr;
  void *_lastAddr;
  filterq_t *fq = malloc(sizeof(filterq_t));
  if (fq != NULL)
  {
    fq -> _baseAddr = malloc((bufLen + 1) * varLen);
    fq -> _lastAddr = _baseAddr + (bufLen + 1) * varLen;

    fq -> _head = _baseAddr;
    fq -> _tail = _baseAddr;
    fq -> push = pushData;
  }

}

//Methods
static void pushData(filterq_t *fq, void *valuePtr)
{

}
