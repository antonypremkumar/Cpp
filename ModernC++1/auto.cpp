#include<iostream>

using namespace std;

int main()
{
  int a = 5;
  int& b = a;
  const int c = 7;
  const int& d = c;

  // auto will strip off const/volatile reference
  auto a_auto = a;
  auto b_auto = b;
  auto c_auto = c;
  auto d_auto = d;

  // To find out the typename
  // decltype(a_auto)::_;
  // decltype(b_auto)::_;
  // decltype(c_auto)::_;
  // decltype(d_auto)::_;

  auto& b_auto_ref = a;
  const auto c_auto_const = a;

  // decltype(b_auto_ref)::_;
  // decltype(c_auto_const)::_;

  // decltype will not strip off const/volatile reference
  decltype(a) a_dt;
  decltype(b) b_dt = b;
  decltype(c) c_dt = c;
  decltype(d) d_dt = d;
}