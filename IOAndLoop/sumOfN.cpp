#include <iostream>

int main()
{
  int n;
  int sum = 0;

  std::cout << "Input limit: \n";
  std::cin >> n;

  for(int i=0; i<n; i++)
    sum = sum + i;

  std::cout << "Sum of " << n;
  std::cout << " numbers is: " << sum << std::endl;
}