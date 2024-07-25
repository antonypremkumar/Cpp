#include <iostream>
#include <cstring>
#include <stack>

int main()
{
  char postfix[] = {'1', '2', '3', '*', '+', '4', '-'}, ch;
  std::stack<int> s;

  for(int i=0; i<strlen(postfix); i++)
  {
    ch = postfix[i];
    if(isdigit(ch))
    {
      s.push(ch - '0');
    }
    else
    {
      int op1 = s.top();
      s.pop();
      int op2 = s.top();
      s.pop();
      switch (ch)
      {
      case '+':
        s.push( op1 + op2 );
        break;
      case '-':
        s.push( op1 - op2 );
        break;
      case '*':
        s.push( op1 * op2 );
        break;
      case '/':
        s.push( op1 / op2 );
        break;
      }
    }
  }
  std::cout << "Evaluation : " << s.top() << std::endl;
}