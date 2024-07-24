#include <stdio.h>

int main()
{
  int a, b;
  int sum;

  printf("Input two numbers: \n");
  scanf("%d %d", &a, &b);

  sum = a + b;
  printf("Sum of %d and %d ", a, b);
  printf("is: %d\n", sum);

}