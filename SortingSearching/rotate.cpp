#include <iostream>
#include <algorithm>

int main()
{
  int data[] = {1, 2, 3, 4, 5};

  std::rotate(data, data+2, data+5);

  for(int i=0; i<5; i++)
    std::cout << data[i] << " ";

  std::cout << std::endl;
}
