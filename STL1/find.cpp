#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;

template<class In, class T>
In find(In first, In last, const T& val)
{
  while
  (
    first != last
    &&
    *first != val
  )
    ++first;

  return first;
}

int main()
{
  vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8 };
  vector<int>::iterator SA = find<vector<int>::iterator, int>(a.begin(), a.end(), 5);
  if( SA != a.end() ) cout << "The found element is : " << *SA << endl;

  vector<double> b = { 1, 2, 3, 4.4, 5, 6, 7, 8 };
  vector<double>::iterator SB = find<vector<double>::iterator, double>(b.begin(), b.end(), 4.2);
  if( SB != b.end() ) cout << "The found element is : " << *SB << endl;

  list<string> c = { "one", "two", "three", "four", "five", "six", "seven", "eight" };
  list<string>::iterator SC = find<list<string>::iterator, string>(c.begin(), c.end(), "five");
  if( SC != c.end() ) cout << "The found element is : " << *SC << endl;
}