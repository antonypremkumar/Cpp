#include<iostream>
using namespace std;

class B
{
  public:
  void f()
  {
    cout << " B::f() " << endl;
  }
  virtual void g()
  {
    cout << " B::g() " << endl;
  }
};

class D : public B
{
  public:
  void f()
  {
    cout << " D::f() " << endl;
  }
  virtual void g()
  {
    cout << " D::g() " << endl;
  }
};

int main()
{
  B b; D d;

  B *pb = &b;
  B *pd = &d;

  b.f();  // B::f()
  b.g();  // B::g()
  d.f();  // D::f()
  d.g();  // D::g()

  cout << "---------\n";

  pb->f();  // B::f() -- static binding
  pb->g();  // B::g() -- non static binding
  pd->f();  // B::f() -- static binding
  pd->g();  // D::g() -- non static binding

}