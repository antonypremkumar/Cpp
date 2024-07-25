#include <iostream>
#include <algorithm>

int main()
{
  int data[] = {1, 2, 3, 4, 5};
  int k = 3;

  // For my UDT i need a compare function
  if(std::binary_search(data, data+5, k))
    printf("found!\n");
  else
    printf("not found!\n");
}