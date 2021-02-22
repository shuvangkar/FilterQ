#include "FilterQ.h"
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
static void pushData(filterq_t *fq, void *valuePtr);


filterq_t *filterq_create(uint8_t bufLen, uint8_t varLen)
{

  filterq_t *fq = malloc(sizeof(filterq_t));
  if(fq != NULL)
  {
    fq -> _bufPtr = malloc((bufLen+1)*varLen);
    fq -> push = pushData;
  }
  
}

//Methods
static void pushData(filterq_t *fq, void *valuePtr)
{
  
}
