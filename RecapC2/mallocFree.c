#include <stdlib.h>
#include <stdio.h>

int main()
{
  int *p = (int*) malloc(sizeof(int));
  printf("%X\n", *p);

  unsigned char *q = (char*) p;
  printf("%X\n", *q++);
  printf("%X\n", *q++);
  free(p);
  return 0;
}