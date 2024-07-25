#include <iostream>
#include <algorithm>

// compare function pointer
bool compare(
  int a,
  int b
)
{
  return (a > b);
}

int main()
{
  int data[] = {32, 71, 12, 45, 26};

  // Because of templates sizeof(int) is not required
  std::sort(data, data+5, compare);

  // The following also works
  // std::sort(data, data+5, &compare);

  for(int i=0; i<5; i++)
    std::cout << data[i] << " ";
  std::cout << std::endl;
}