#include <iostream>

int& Return_ref1(int& x)
{
  int t = x;
  t++;
  return t;
}

int& Return_ref2(int& x)
{
  return x;
}

int main()
{
  int a=10, b=Return_ref2(a);
  std::cout << "a = " << a << " and b = " << b << std::endl;

  Return_ref2(a) = 3;
  std::cout << "a = " << a << std::endl;

  Return_ref1(a) = 3;
  std::cout << "a = " << a << std::endl;
}