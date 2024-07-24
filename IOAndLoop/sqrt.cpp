#include <iostream>
#include <cmath>

int main()
{
  double x;
  double squareRoot;

  std::cout << "Input numbers: \n";
  std::cin >> x;

  squareRoot = std::sqrt(x);
  std::cout << "Square root of " << x << " is: " << squareRoot << std::endl;
}