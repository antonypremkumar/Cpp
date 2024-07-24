#include <iostream>
#include <string>

int main()
{
  std::string str1 = "HELLO";
  std::string str2 = "WORLD";

  std::string str = str1 + " " + str2;

  std::cout << str << std::endl;
}