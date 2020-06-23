#include <stddef.h>
#include <iostream>

int main(int args, char **argv)
{
  int *array = new int[30];

  for (int i = 0; 30 > i; i++)
  {
    std::cout << array[i] << std::endl;
  }

  for (size_t i = 0; i < 30; ++i)
  {
    array[i] = i;
  }
  std::cout << array << std::endl;
  for (int i = 0; 30 > i; i++)
  {
    std::cout << array[i] << std::endl;
  }
  return 0;
}