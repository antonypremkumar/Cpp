#include <iostream>
#include <functional>

class MyClass
{
  typedef std::function<void (float result)> TCallback;
  void longRunningFunction(TCallback callback)
  {
    double result = 2.7;
    // do some huge task
    callback(result);
  }
  void callback(double result)
  {
    std::cout << result << std::endl;
  }
  public:
  void longRunningFunctionAsync()
  {
    auto callback = std::bind(&MyClass::callback, this, std::placeholders::_1);
    longRunningFunction(callback);
  }
};

int main()
{
  MyClass().longRunningFunctionAsync();
}