#include <iostream>
#include <thread>
#include <chrono>

void f1(int n)
{
  for(int i=0; i<5; i++)
  {
    std::cout << "Thread 1 executing\n";
    ++n;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
  }
}

void f2(int& n)
{
  for(int i=0; i<5; i++)
  {
    std::cout << "Thread 2 executing\n";
    ++n;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
  }
}

class foo
{
  public:
  int n = 0;
  void bar()
  {
    for(int i=0; i<5; i++)
    {
      std::cout << "Thread 3 executing\n";
      ++n;
      std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
  }
};

class baz
{
  public:
  int n = 0;
  void operator() ()
  {
    for(int i=0; i<5; i++)
    {
      std::cout << "Thread 4 executing\n";
      ++n;
      std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
  }
};

int main()
{
  int n=0;
  foo f;
  baz b;

  std::thread t1;
  std::cout << "t1 = " << t1.get_id() << "\n";

  std::thread t2(f1, n + 1);
  std::cout << "t2 = " << t2.get_id() << "\n";

  std::thread t3(f2, std::ref(n));
  std::cout << "t3 = " << t3.get_id() << "\n";

  std::thread t4(std::move(t3));
  std::cout << "t4 = " << t4.get_id() << "\n";

  std::thread t5(&foo::bar, &f);
  std::cout << "t5 = " << t5.get_id() << "\n";

  std::thread t6(b);
  std::cout << "t6 = " << t6.get_id() << "\n";

  t2.join();
  t4.join();
  t5.join();
  t6.join();

  std::cout << "Final n " << n << "\n";
  std::cout << "Final f.n (foo::n) " << f.n << "\n";
  std::cout << "Final b.n (baz::n) " << b.n << "\n";

}