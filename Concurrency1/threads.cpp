#include <iostream>
#include <thread>

using namespace std;

void f()
{
  cout << "In f()" << endl;
}

struct F
{
  void operator() ()
  {
    cout << "In F()" << endl;
  }
};

int main()
{
  std::thread t1{f};
  std::thread t2{F()};

  t1.join();
  t2.join();
}
