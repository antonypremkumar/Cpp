#include <stdio.h>

int funct(int x, int y)
{
  ++x;
  ++y;
  return (x + y);
}

int main()
{
  int a = 5, b = 10, z;
  printf("a = %d, b = %d\n", a, b);

  z = funct(a, b);
  printf("funct = %d\n", z);
  printf("a = %d, b = %d\n", a, b);
}