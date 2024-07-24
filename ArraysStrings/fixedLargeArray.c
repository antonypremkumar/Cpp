#include <stdio.h>
#define MAX 100

int main()
{
  int arr[MAX];
  int count, sum = 0, i;
  printf("Enter no. of elements: ");
  scanf("%d", &count);
  for(i=0; i<count; i++)
  {
    arr[i] = i;
    sum = sum + arr[i];
  }
  printf("Array sum is: %d\n", sum);
}