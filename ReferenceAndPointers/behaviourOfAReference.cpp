#include<iostream>

using namespace std;

int main()
{
  int a=10, &b=a;

  cout << "a = " << a << ", b = " << b << "." << endl;
  cout << "&a = " << &a << ", &b = " << &b << "." << endl;

  ++a;
  cout << "a = " << a << ", b = " << b << "." << endl;
  cout << "&a = " << &a << ", &b = " << &b << "." << endl;

  ++b;
  cout << "a = " << a << ", b = " << b << "." << endl;
  cout << "&a = " << &a << ", &b = " << &b << "." << endl;

  // The following code will cause an error
  // int &i = 5;
  // int &j = a + b;
  const int &i = 5;
  const int &j = a + b;
  cout << "i = " << i << ", &i = " << &i << "." << endl;
  cout << "j = " << j << ", &j = " << &j << "." << endl;

  return 0;
}