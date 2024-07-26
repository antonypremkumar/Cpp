#include <iostream>

int main()
{
  int i=2;
  int& j = i;
  const int& k = 5;     // const tells compiler to allocate memory with the value 5
  const int& l = j + k; // similarly for j + k = 7 for l to refer to

  std::cout << i << ", " << &i << std::endl;
  std::cout << j << ", " << &j << std::endl;
  std::cout << k << ", " << &k << std::endl;
  std::cout << l << ", " << &l << std::endl;
}