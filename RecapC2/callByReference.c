#include <stdio.h>

int arraySum(
  int a[],
  int n
)
{
  int sum = 0;
  for(int i = 0; i < n; ++i)
  {
    sum += a[i];
    a[i] = 0;
  }
  return sum;
}

int main()
{
  int a[3] = {1, 2, 3};
  printf("Sum = %d\n", arraySum(a, 3));
  printf("Sum = %d\n", arraySum(a, 3));
}