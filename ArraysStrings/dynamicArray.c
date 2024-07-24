#include <stdio.h>
#include <stdlib.h>

int main()
{
  int count, sum = 0, i;
  printf("Enter no. of elements: ");
  scanf("%d", &count);

  int *arr = (int*) malloc(sizeof(int) * count);

  for(i=0; i<count; i++)
  {
    arr[i] = i;
    sum = sum + arr[i];
  }
  printf("Array sum is: %d\n", sum);
  free(arr);
}