#include<iostream>
#include<exception>
using namespace std;

class Excp
:
public exception
{};

void g()
{
  bool error = true;
  cout << "g() started \n";
  if(error)
    throw Excp();
  cout << "g() ended \n";
}

int main()
{
  try{
    cout << "g() called \n";
    g();
    cout << "g() returned \n";
  }
  catch (Excp&)
  {
    cout << "g() failed\n";
  }
}