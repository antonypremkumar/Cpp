#include<iostream>
#include<memory>

using namespace std;

int main()
{
  shared_ptr<int> p1 = make_shared<int>();
  *p1 = 78;

  cout << "p1 = " << *p1 << endl;
  cout << "p1 RC = " << p1.use_count() << endl;

  shared_ptr<int> p2(p1);

  cout << "p2 = " << *p2 << endl;
  cout << "p1 RC = " << p1.use_count() << endl;
  cout << "p2 RC = " << p2.use_count() << endl;

  if( p1 == p2 )
  {
    cout << "Same objects \n";
  }
  cout << "Reset p1 \n";
  p1.reset();
  cout << "p1 RC = " << p1.use_count() << endl;
  cout << "p2 RC = " << p2.use_count() << endl;

  p1.reset(new int(11));
  cout << "p1 RC = " << p1.use_count() << endl;
  cout << "p2 RC = " << p2.use_count() << endl;

  p1 = nullptr;
  cout << "p1 RC = " << p1.use_count() << endl;
  cout << "p2 RC = " << p2.use_count() << endl;
  if( !p1 ) cout << "p1 is NULL" << endl;
}