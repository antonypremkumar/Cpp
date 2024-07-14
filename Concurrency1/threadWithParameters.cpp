#include <iostream>
#include <thread>
#include <vector>
#include <functional>

using namespace std;

void f(vector<int> v)
{
  cout << "In f()" << endl;
  for( auto e : v )
  {
    cout << e << "  ";
  }
  cout << endl;
}

struct F
{
  vector<int>& v;
  F(vector<int>& inp_v)
  :
  v(inp_v)
  {
  }
  void operator() ()
  {
    cout << "In F() ()" << endl;
    for( auto e : v )
    {
      cout << e << "  ";
    }
    cout << endl;
    }
};

int main()
{
  vector<int> my_vec = {2, 3, 5, 7, 11};
  std::thread t1{std::bind(f, my_vec)};
  std::thread t2{F(my_vec)};

  t1.join();
  t2.join();
}
