#include <iostream>
#include <vector>
#define MAX 100

int main()
{
  std::vector<int> arr(MAX);
  int count, sum = 0;
  std::cout << "Enter no. of elements: ";
  std::cin >> count;
  for(int i=0; i<count; i++)
  {
    arr[i] = i;
    sum = sum + arr[i];
  }
  std::cout << "Array sum is: " << sum << std::endl;
}