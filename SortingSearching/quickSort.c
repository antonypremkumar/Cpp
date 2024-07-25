#include <stdio.h>
#include <stdlib.h>

// compare function pointer
int compare(
  const void* a,
  const void* b
)
{
  return (*(int*)a < *(int*)b);
}

int main()
{
  int data[] = {32, 71, 12, 45, 26};
  qsort(data, 5, sizeof(int), compare);
  // The following also works
  // qsort(data, 5, sizeof(int), &compare);

  for(int i=0; i<5; i++)
    printf("%d ", data[i]);
  printf("\n");
}