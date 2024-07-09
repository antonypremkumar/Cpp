#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;

template<class In, class Pred>
In findFirstOdd(In first, In last, Pred pred)
{
  while
  (
    first != last
    &&
    !pred(*first)
  )
    ++first;

  return first;
}

// Function object
struct Odd
{
  bool operator() (int i) const
  {
    return i % 2;
  }
};

int main()
{
  // vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8 };
  // vector<int> a = { 2, 4, 55, 4, 5, 6, 7, 8 };
  vector<int> a = { 2, 4, 4, 6, 6, 99, 8 };
  vector<int>::iterator SA = findFirstOdd<vector<int>::iterator, Odd>(a.begin(), a.end(), Odd());
  if( SA != a.end() ) cout << "The first odd element is : " << *SA << endl;
}