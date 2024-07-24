#include <stdio.h>
#include <math.h>

int main()
{
  double x;
  double squareRoot;

  printf("Input numbers: \n");
  scanf("%lf", &x);

  squareRoot = sqrt(x);
  printf("Square root of %lf ", x);
  printf("is: %lf\n", squareRoot);
}