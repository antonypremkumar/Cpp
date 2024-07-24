#include <stdio.h>

int main()
{
  int n;
  int i;
  int sum = 0;

  printf("Input limit: \n");
  scanf("%d", &n);

  for(i=0; i<n; i++)
    sum = sum + i;

  printf("Sum of %d ", n);
  printf("numbers is: %d\n", sum);
}