#include<stdio.h>

int f( int x, int y)
{
  return x + y;
}

int main()
{
  int a = 2;
  int b = 3;

  if ( a < b )
  {
    int t;
    t = a;
    a = b;
    b = t;
  }

  if ( a < 5 )
    a = a + 1;
  else
  {
    a = a + 2;
    b--;
  }

  switch (a)
  {
  case 1:
    b = 100;
    break;
  case 2:
    b = 200;
    break;
  case 3:
    b = 300;
    break;
  case 4:
    b = 400;
    break;
  default:
    b = 999;
    break;
  }

  int sum = 0;
  for ( int i = 0; i < 5; i ++ )
  {
    int j = i * i;
    sum += j;
  }

  while (a)
  {
    sum += a;
    if ( sum > 20 )
      break;
    --a;
  }
  return 0;
}