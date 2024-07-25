#include <iostream>
#include <cmath>

#define TWO 2
#define PI 4.0*atan(1.0)

int main()
{
  int r = 10;
  double peri = TWO * PI * r;
  std::cout << "Perimeter = " << peri << std::endl;
}