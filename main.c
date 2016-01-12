#include <string.h>
#include "array.h"

int main()
{
  char memory[1000];
  char *p = memory;
  // copy all data from array to destination
  memcpy(p, array, sizeof(array));
  return 0;
}
