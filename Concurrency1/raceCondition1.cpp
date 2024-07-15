#include <iostream>

using namespace std;

int accum = 0;
void square( int x )
{
  accum += x * x;
}

int main()
{
  for(int i=1; i<=20; i++ )
  {
    square(i);
  }
  cout << "Accum = " << accum << endl;
}