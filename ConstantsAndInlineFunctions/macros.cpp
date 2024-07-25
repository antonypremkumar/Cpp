#include <iostream>

#define SQUARE(x) x * x

int main()
{
  int a = 3, b;

  b = SQUARE(a);

  std::cout << "Square = " << b << std::endl;
}