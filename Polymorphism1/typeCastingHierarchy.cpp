#include<iostream>
using namespace std;

class A
{ 
  public: 
  int dataA_; 
};

class B : public A 
{ 
  public: 
  int dataB_;
};

int main()
{
  A a;
  a.dataA_ = 2;
  B b;
  b.dataA_ = 3; 
  b.dataB_ = 5;

  A *pa = &a;
  B *pb = &b;

  cout << "Data from pa " << endl;
  cout << "-------------" << endl;
  cout << "pa->dataA_ : " << pa->dataA_ << endl;
  cout << "-------------" << endl;
  cout << "Data from pb " << endl;
  cout << "-------------" << endl;
  cout << "pb->dataA_ : " << pb->dataA_ << endl;
  cout << "pb->dataB_ : " << pb->dataB_ << endl;
  cout << "-------------" << endl;

  pa = &b;
  
  cout << "Data from pa " << endl;
  cout << "-------------" << endl;
  cout << "pa->dataA_ : " << pa->dataA_ << endl;
  // The pointer to a has not idea of dataB_
  // cout << "pa->dataB_ : " << pa->dataB_ << endl;
  cout << "-------------" << endl;

  pb = (B*)&a;
  
  cout << "Data from pb " << endl;
  cout << "-------------" << endl;
  cout << "pb->dataA_ : " << pb->dataA_ << endl;
  cout << "pb->dataB_ : " << pb->dataB_ << endl;
  cout << "-------------" << endl;
}