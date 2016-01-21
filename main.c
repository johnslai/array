#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include "array.h"

#define _TEST_
int main()
{
  uint8_t memory[1000];
  uint8_t *p = memory;
  // copy all data from array to destination
  memcpy(p, array, sizeof(array));
#ifdef _TEST_
  printf("sizeof(array) = %lu\n", sizeof(array));
  for (int i = 0; i< sizeof(array); i++) {
    if (p[i] != array[i]) 
      printf("error @ %d expected %d = %d\n", i, p[i], array[i]);
  }
#endif
  return 0;
}
