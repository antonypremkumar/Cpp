#include <iostream>
#include <algorithm>

bool compare(
  int a,
  int b
)
{
  return (a < b);
}

int main()
{
  int data[] = {32, 71, 12, 45, 26};

  std::sort(data, data+5, compare);

  for(int i=0; i<5; i++)
    std::cout << data[i] << " ";
  std::cout << std::endl;
}