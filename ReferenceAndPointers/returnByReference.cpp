#include <iostream>

int Function_Return_By_Val(int &x)
{
  std::cout << "x = " << x << " &x = " << &x << std::endl;
  return x;
}

int& Function_Return_By_Ref(int &x)
{
  std::cout << "x = " << x << " &x = " << &x << std::endl;
  return x;
}

int main()
{
  int a=10;
  std::cout << "a = " << a << " &a = " << &a << std::endl;

  // const needed here
  const int& b = Function_Return_By_Val(a);
  std::cout << "b = " << b << " &b = " << &b << std::endl;
  
  // const not needed here
  int& c = Function_Return_By_Ref(a);
  std::cout << "c = " << c << " &c = " << &c << std::endl;
}