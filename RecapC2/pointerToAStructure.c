#include <stdio.h>

struct Complex
{
  double re;
  double im;
};

int main()
{
  struct Complex a = {0.0, 0.0};
  struct Complex *b = &a;

  (*b).re = 2.5;
  b->im = 3.6;

  printf("re = %lf\n", a.re);
  printf("im = %lf\n", a.im);

  return 0;
}