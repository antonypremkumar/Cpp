#include<iostream>

using namespace std;

template<typename T>
auto foo(T& t)
{
  return t.value();
}

template<typename T>
auto& bar(T& t)
{
  return t.value();
}

template<typename T>
decltype(auto) foobar(T& t)
{
  return t.value();
}

int main()
{
  struct A
  {
    int i = 0;
    int& value()
    {
      return i;
    }
  } a;

  struct B
  {
    int i = 0;
    int value()
    {
      return i;
    }
  } b;

  // foo(a) = 20; // results in an error as auto strips reference
  foo(b);

  bar(a) = 20;
  // bar(b);

  foobar(a) = 20;
  foobar(b);
}