#include <iostream>

int Add(int a = 10, int b = 20)
{
  return a + b;
}

int main()
{
  int x=5, y=6, z;

  z = Add(x, y);
  std::cout << "Sum = " << z << std::endl;

  z = Add(x);
  std::cout << "Sum = " << z << std::endl;

  z = Add();
  std::cout << "Sum = " << z << std::endl;
}