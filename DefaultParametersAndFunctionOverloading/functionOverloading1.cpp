#include <iostream>

int Add(int a, int b)
{
  return a + b;
}

double Add(double c, double d)
{
  return c + d;
}

int main()
{
  int x=5, y=6, z;
  z = Add(x, y);
  std::cout << "int sum  = " << z << std::endl;

  double s=3.5, t=4.25, u;
  u = Add(s, t);
  std::cout << "double sum  = " << u << std::endl;
}