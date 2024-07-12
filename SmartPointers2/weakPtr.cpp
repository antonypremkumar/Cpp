#include<iostream>
#include<memory>

std::weak_ptr<int> gw;

void f()
{
  if( auto sp = gw.lock() )
  {
    std::cout << *sp << "\n";
  }
  else
  {
    std::cout << "gw has expired\n";
  }
}

int main()
{
  {
    auto sp = std::make_shared<int>(42);
    gw = sp;
    f();
  }
  f();
}