#include<iostream>
using namespace std;

class Stack
{
  public:
  char data_[100];
  int top_;
  bool empty()
  {
    return (top_ == -1);
  }
  void push(char c)
  {
    data_[top_ + 1] = c;
    top_ = top_ + 1;
  }
  char top()
  {
    return data_[top_];
  }
  void pop()
  {
    top_ = top_ - 1;
  }
};

int main()
{
  Stack s; 
  s.top_ = -1;
  char str[10] = "ABCDE";
  for(int i=0; i<5; i++)
    s.push(str[i]);

  cout << "Reversed string : ";
  while(!s.empty())
  {
    cout << s.top();
    s.pop();
  }
  cout << endl;

}