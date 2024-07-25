#include <iostream>
#include <algorithm>

int main()
{
  int data[] = {1, 2, 3, 4, 5};

  std::replace(data, data+5, 3, 2);

  for(int i=0; i<5; i++)
    std::cout << data[i] << " ";

  std::cout << std::endl;
}