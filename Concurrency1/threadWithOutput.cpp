#include <iostream>
#include <thread>
#include <vector>
#include <functional>

using namespace std;

void f(vector<int> v, int* res)
{
  cout << "In f()" << endl;
  *res = 0;
  for( auto e : v )
  {
    cout << e << "  ";
    *res = *res + e;
  }
  cout << endl;
}

struct F
{
  vector<int>& v;
  int* res;
  F(vector<int>& inp_v, int* inp_res)
  :
  v(inp_v),
  res(inp_res)
  {
  }
  void operator() ()
  {
    cout << "In F() ()" << endl;
    *res = 0;
    for( auto e : v )
    {
      cout << e << "  ";
      *res = *res + e;
    }
    cout << endl;
    }
};

int main()
{
  vector<int> my_vec = {2, 3, 5, 7, 11};
  int res1, res2;
  std::thread t1{std::bind(f, my_vec, &res1)};
  std::thread t2{F(my_vec, &res2)};

  t1.join();
  t2.join();

  cout << "Result from f() is " << res1 << endl;
  cout << "Result from F()() is " << res2 << endl;
}
