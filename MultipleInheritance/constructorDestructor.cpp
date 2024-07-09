#include<iostream>
using namespace std;

class Base1
{
  protected:
  int i_;
  int data_;
  public:
  Base1(int a, int b)
  :
  i_(a),
  data_(b)
  {
    cout << "Base1::Base1() \n";
  }
  ~ Base1()
  {
    cout << "Base1::~Base1() \n";
  }
};

class Base2
{
  protected:
  int j_;
  int data_;
  public:
  Base2(int a = 0, int b = 0)
  :
  j_(a),
  data_(b)
  {
    cout << "Base2::Base2() \n";
  }
  ~ Base2()
  {
    cout << "Base2::~Base2() \n";
  }
};

class Derived
:
// Constructors will be created in the following order
public Base1, Base2
{
  int k_;
  public:
  Derived(int x, int y, int z)
  :
  Base1(x, y),
  k_(z)
  {
    cout << "Derived::Derived() \n";
  }
  ~ Derived()
  {
    cout << "Derived::~Derived() \n";
  }
};

int main()
{
  Base1 b1(2 , 3);
  Base2 b2(3 , 7);
  Derived d(5, 3 , 2);
}