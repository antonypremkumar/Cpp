#include <iostream>
#include <vector>
#include <thread>

using namespace std;

int accum = 0;
void square( int x )
{
  int p = x * x;
  int delay = (int) ((double)std::rand() / (double)(RAND_MAX) * 1000);
  std::this_thread::sleep_for(std::chrono::milliseconds(delay));

  accum += p;
}

int main()
{
  vector<thread> ths;
  for(int i=1; i<=20; i++ )
  {
    ths.push_back(thread(&square, i));
  }

  for( auto& th : ths )
  {
    th.join();
  }

  cout << "Accum = " << accum << endl;
}