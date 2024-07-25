#include <iostream>
#include <cstring>
#include <stack>

int main()
{
  char str[10] = "ABCDE";
  std::stack<char> s;

  for(int i=0; i<strlen(str); i++)
    s.push(str[i]);

  std::cout << "Reverse string : ";
  while(!s.empty())
  {
    std::cout << s.top();
    s.pop();
  }
  std::cout << std::endl;
}