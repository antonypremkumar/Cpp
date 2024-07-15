#include <stdio.h>

int main()
{
  int a[] = {1, 2, 3, 4, 5};
  int *p;

  p = a;
  printf("a[0] = %d\n", *p);
  printf("a[1] = %d\n", *++p);
  printf("a[2] = %d\n", *(p+1));

  p = &a[2];
  *p = -10;
  printf("a[2] = %d\n", a[2]);

  return 0;
}