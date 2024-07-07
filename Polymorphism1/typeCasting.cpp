#include<iostream>
using namespace std;

class A{ public: int i; };
class B{ public: double d; };

int main()
{
  int i=3;
  double d=2.5;

  // Implicit casting
  // d=i;
  // i=d;

  // Explicit casting
  // d=(double)i;
  i=(int)d;

  cout << "d : " << d << endl;
  cout << "i : " << i << endl;

  A a; a.i=5;
  B b; b.d=7.2;

  A *p = &a;
  B *q = &b;
  
  // Not possible
  // a = b;
  // a = (A)b;
  // b = a;
  // b = (B)a;
  // p = q;
  // q = p;

  p = (A*)&b;
  q = (B*)&a;

  // Junk will be printed
  cout << "d : " << p->i << endl;
  cout << "i : " << q->d << endl;

}