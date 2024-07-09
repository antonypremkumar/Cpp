#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

void populateVector(list<int>& ll, vector<int>& v)
{
  if(v.size() < ll.size())
  {
    cerr << "Target too small \n";
    return;
  }

  cout << "Vector elements before copy\n";
  cout << "{ ";
  for(auto e : v)
  {
    cout << e << " ";
  }
  cout << "}\n";

  copy(ll.begin(), ll.end(), v.begin());

  cout << "Vector elements after copy\n";
  cout << "{ ";
  for(auto e : v)
  {
    cout << e << " ";
  }
  cout << "}\n";

  sort(v.begin(), v.end());
  
  cout << "Vector elements after sort\n";
  cout << "{ ";
  for(auto e : v)
  {
    cout << e << " ";
  }
  cout << "}\n";
}

int main()
{
  list<int> ll = { 2, 7, 5, 6, 8, 9 };

  cout << "List elements \n";
  cout << "{ ";
  for(auto e : ll)
  {
    cout << e << " ";
  }
  cout << "}\n";

  vector<int> v(ll.size());
  populateVector(ll, v);

}