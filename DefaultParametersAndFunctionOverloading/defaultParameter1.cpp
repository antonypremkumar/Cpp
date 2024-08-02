#include <iostream>

int IdentityFunction(int a = 10)
{
  return a;
}

int main()
{
  int x=5, y;

  y = IdentityFunction(x);
  std::cout << "y = " << y << std::endl;

  y = IdentityFunction();
  std::cout << "y = " << y << std::endl;
}