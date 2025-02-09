#include<iostream>
#include<memory>

struct Foo {
  Foo()
  {
    std::cout << "Foo::Foo()\n";
  }
  ~Foo()
  {
    std::cout << "Foo::~Foo()\n";
  }
  void bar()
  {
    std::cout << "Foo::bar\n";
  }
};

void f(const Foo&)
{
  std::cout << "f(const Foo&)\n";
}

int main()
{
  std::unique_ptr<Foo> p1 = std::make_unique<Foo>();
  if(p1)
    p1->bar();

  {
    std::unique_ptr<Foo> p2(std::move(p1));
    f(*p2);
    p1 = std::move(p2);
    std::cout << "destroying p2.. \n";
  }

  if(p1)
    p1->bar();
}