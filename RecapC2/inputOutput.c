#include <stdio.h>

int main()
{
  char str[100];
  int i;

  printf("Enter a value : \n");
  scanf("%s %d", str, &i);
  printf("You entered: %s %d\n", str, i);
}