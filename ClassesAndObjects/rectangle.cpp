#include<iostream>
using namespace std;

class Point{
  public:
  int x, y;
};

class Rectange{
  public:
  Point TL, BR;
};

int main()
{
  Rectange r = { { 0, 2 }, { 5, 7 } };
  cout << "[(" << r.TL.x << " " << r.TL.y << ")  "
           "(" << r.BR.x << " " << r.BR.y << ")]" << endl;
}