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
  void (*push)(filterq_t *obj, void *data);

}filterq_t;

//Constructor
filterq_t *filterq_create(uint8_t bufLen, uint8_t varLen);
//Destructor
void filterq_destroy(filterq_t *obj);

#endif
