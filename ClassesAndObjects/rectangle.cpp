#include<iostream>
#include<cmath>
using namespace std;

class Point{
  public:
  int x, y;
};

class Rectange{
  public:
  Point TL, BR;
  void computeArea()
  {
    cout << "The area is : " << abs(TL.x - BR.x) * abs(TL.y - BR.y) << endl;
  }
};

int main()
{
  Rectange r = { { 0, 2 }, { 5, 7 } };
  cout << "[(" << r.TL.x << " " << r.TL.y << ")  "
           "(" << r.BR.x << " " << r.BR.y << ")]" << endl;
  r.computeArea();
}