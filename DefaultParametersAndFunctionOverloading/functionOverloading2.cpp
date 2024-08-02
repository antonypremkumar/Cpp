#include <iostream>

int Area(int a, int b)
{
  return a * b;
}

double Area(double c)
{
  return c * c;
}

int main()
{
  int x=10, y=12, t;
  t = Area(x, y);
  std::cout << "Area of Rectangle  = " << t << std::endl;

  int z=5, u;
  u = Area(z);
  std::cout << "Area of Square  = " << u << std::endl;
}