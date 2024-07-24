#include <stdio.h>

unsigned int factorial(unsigned int n)
{
  if(n > 0)
    return n * factorial(n - 1);
  else
    return 1;
}

unsigned int nOnes(unsigned int n)
{
  if(n == 0)
    return 0;
  else
    if (n % 2 == 0)
      return nOnes(n / 2);
    else
      return nOnes(n / 2) + 1;
}

int main()
{
  printf("Factorial of 10 is %d\n", factorial(10));
  printf("Number of ones in 3290872 is %d\n", nOnes(3290872));
}