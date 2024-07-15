#include <iostream>
#include <utility>      // ref, move, mem_fn
#include <memory>       // make_shared, make unique
#include <functional>   // std::placeholders

void f(int n1, int n2, int n3, const int& n4, int n5)
{
  std::cout << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << ' ' << n5 << '\n';
}

int g(int n1)
{
  return n1;
}

struct Foo
{
  int data = 10;
  void print_sum(int n1, int n2)
  {
    std::cout << n1 + n2 << "\n";
  }
};

int main()
{
  std::cout << "1) argument reordering and pass-by-reference: ";
  int n = 7;
  auto f1 = std::bind(f, std::placeholders::_2, 42, std::placeholders::_1, std::cref(n), n);
  n = 10;
  f1(1, 2, 1001);

  std::cout << "2) achieving the same effect using a lambda: ";
  n = 7;
  auto lambda = [ncref=std::cref(n), n=n](auto a, auto b, auto /*unused*/)
  {
    f(b, 42, a, ncref, n);
  };
  n = 10;
  lambda(1, 2, 1001);

  std::cout << "3) nested bind subexpressions share the placeholders: ";
  auto f2 = std::bind
            (
              f, 
              std::placeholders::_3, 
              std::bind(g, std::placeholders::_3), 
              std::placeholders::_3, 
              4, 
              5
            );
  f2(10, 11, 12);

  std::cout << "4) bind to a pointer to member function: ";
  Foo foo;
  // Remember the first argument of a member function is the pointer to the object
  auto f3 = std::bind(&Foo::print_sum, &foo, 95, std::placeholders::_1);
  f3(5);

  std::cout << "5) bind to a mem_fn that is a pointer to member function: ";
  auto ptr_to_print_sum = std::mem_fn(&Foo::print_sum); // std::mem_fn generates wrapper objects
  auto f4 = std::bind(ptr_to_print_sum, &foo, 95, std::placeholders::_1);
  f4(5);

  // Have not completely understood it
  std::cout << "6) bind to a pointer to data member: ";
  auto f5 = std::bind(&Foo::data, std::placeholders::_1);
  std::cout << f5(foo) << '\n';

  std::cout << "7) bind to a mem_fn that is a pointer to data member: ";
  auto ptr_to_data = std::mem_fn(&Foo::data);
  auto f6 = std::bind(ptr_to_data, std::placeholders::_1);
  std::cout << f6(foo) << '\n';

  std::cout << "8) use smart pointers to call members of the referenced objects: ";
  std::cout << f6(std::make_shared<Foo>(foo)) << ' ' << f6(std::make_unique<Foo>(foo)) << '\n';
}