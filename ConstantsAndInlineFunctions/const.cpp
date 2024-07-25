#include <iostream>
#include <cmath>

const int TWO = 2;
const double PI = 4.0*atan(1.0);

int main()
{
  int r = 10;
  double peri = TWO * PI * r;
  std::cout << "Perimeter = " << peri << std::endl;
}