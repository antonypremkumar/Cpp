#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

using namespace std;

int accum = 0;
mutex accum_mutex;
void square( int x )
{
  int p = x * x;
  int delay = (int) ((double)std::rand() / (double)(RAND_MAX) * 1000);
  std::this_thread::sleep_for(std::chrono::milliseconds(delay));

  accum_mutex.lock();
  accum += p;
  accum_mutex.unlock();
}

int main()
{
  int trial_count = 0;
  do
  {
    ++trial_count;
    if ( 0 == trial_count % 10 )
      cout << "trials = " << trial_count << endl;

    accum = 0;
    vector<thread> ths;
    for(int i=1; i<=20; i++ )
    {
      ths.push_back(thread(&square, i));
    }

    for( auto& th : ths )
    {
      th.join();
    }
  } while (accum == 2870);
  
  cout << "Accum = " << accum << endl;
}