#include <iostream>

void swap(int& c, int& d)
{
  int temp = c;
  c = d;
  d = temp;
}

int main()
{
  int a=10, b=15;
  std::cout << "a=" << a << " & b=" << b << " to swap" << std::endl;

  swap(a, b);
  std::cout << "a=" << a << " & b=" << b << " on swap" << std::endl;
}