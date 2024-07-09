#include<iostream>
using namespace std;

class Person
{
  public:
  Person(int x)
  {
    cout << "Person::Person(int)" << endl;
  }
};

class Faculty
:
// virtual here means completely different
virtual public Person
{
  public:
  Faculty(int x)
  :
  Person(x)
  {
    cout << "Faculty::Faculty(int)" << endl;
  }
};

class Student
:
// virtual here means completely different
virtual public Person
{
  public:
  Student(int x)
  :
  Person(x)
  {
    cout << "Student::Student(int)" << endl;
  }
};

class TA
:
public Faculty, Student
{
  public:
  TA(int x)
  :
  Student(x),
  Faculty(x),
  Person(x)
  {
    cout << "TA::TA(int)" << endl;
  }
};

int main()
{
  TA ta(30);
}