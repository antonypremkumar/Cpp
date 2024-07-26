#include <stdio.h>

void swapV(int c, int d)
{
  int temp;
  temp = c;
  c = d;
  d = temp;
}

void swapA(int* c, int* d)
{
  int temp;
  temp = *c;
  *c = *d;
  *d = temp;
}

int main()
{
  int a=10, b=15;
  printf("a = %d & b = %d to swap\n", a, b);

  printf("Call by value \n");
  swapV(a, b);
  printf("a = %d & b = %d on swap\n", a, b);

  printf("Call by address \n");
  swapA(&a, &b);
  printf("a = %d & b = %d on swap\n", a, b);
}