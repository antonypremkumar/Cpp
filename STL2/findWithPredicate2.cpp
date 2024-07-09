#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;

// Create a type for the function object
typedef bool (*fnptr) (int);

// Create a function to check if a value is divisible by 2
bool odd(int i)
{
  return i % 2;
};

template<class In>
In findFirstOdd(In first, In last, fnptr pred)
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

int main()
{
  // vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8 };
  vector<int> a = { 2, 4, 55, 4, 5, 6, 7, 8 };
  // vector<int> a = { 2, 4, 4, 6, 6, 99, 8 };
  vector<int>::iterator SA = findFirstOdd<vector<int>::iterator>(a.begin(), a.end(), odd);
  if( SA != a.end() ) cout << "The first odd element is : " << *SA << endl;
}