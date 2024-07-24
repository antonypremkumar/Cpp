#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp = NULL;
  int i;

  fp = fopen("Input.dat", "r");
  if(!fp)
  {
    fprintf(stderr, "Failed to open Input.dat\n");
    exit(1);
  }
  fscanf(fp, "%d", &i);
  fclose(fp);

  fp = fopen("Output.dat", "w");
  if(!fp)
  {
    fprintf(stderr, "Failed to open Outpu.dat\n");
    exit(1);
  }
  fprintf(fp, "%d^2 = %d\n", i, i*i);
  fclose(fp);
}