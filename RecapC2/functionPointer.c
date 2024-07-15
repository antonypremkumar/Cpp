#include <stdio.h>

struct GeoObject
{
  enum
  {
    CIR = 0,
    REC,
    TRG
  } gCode;

  union 
  {
    struct Cir
    {
      double x, y, r;
    } c;

    struct Rec
    {
      double x, y, w, h;
    } r;

    struct Trg
    {
      double x, y, b, h;
    } t;
  };
};

// Function pointer type
typedef void(*DrawFunc) (struct GeoObject);

int main()
{

}