#include<iostream>
#include<vector>
#include<list>
using namespace std;

template<class Iter, class T>
T sum(Iter first, Iter last, T s)
{
  while(first != last)
  {
    s = s + *first;
    ++first;
  }
  return s;
}

int main()
{
  vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8 };
  int SA = sum<vector<int>::iterator, int>(a.begin(), a.end(), 0);
  cout << "The sum is : " << SA << endl;

  vector<double> b = { 1, 2, 3, 4.4, 5, 6, 7, 8 };
  double SB = sum<vector<double>::iterator, double>(b.begin(), b.end(), 0.0);
  cout << "The sum is : " << SB << endl;

  list<double> c = { 1, 2, 3, 4.4, 5, 6, 7, 8.4 };
  double SC = sum<list<double>::iterator, double>(c.begin(), c.end(), 0.0);
  cout << "The sum is : " << SC << endl;
}