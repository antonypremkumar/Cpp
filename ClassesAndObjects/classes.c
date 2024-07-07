#include<stdio.h>

typedef struct Complex{
  double re, im;
} Complex;

int main()
{
  Complex c = { 4.2, 5.3 };
  printf("%lf %lf \n", c.re, c.im);
}