#ifndef _FILTERQ_H
#define _FILTERQ_H
#include <Arduino.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>


typedef struct filterq_t
{
  void *_baseAddr;
  void *_lastAddr;
  void *_head;
  void *_tail;
  uint8_t _varSz;
  void (*push)(filterq_t *obj, void *data);

}filterq_t;


void printAddr(char *buf, void *ptr);
//Constructor
//filterq_t *filterq_create(uint8_t bufLen, uint8_t varLen);
filterq_t *filterq_create(void *bufPtr,uint8_t varSz uint8_t bufSz);
//Destructor
void filterq_destroy(filterq_t *obj);

extern char testbuf[32];
#endif
