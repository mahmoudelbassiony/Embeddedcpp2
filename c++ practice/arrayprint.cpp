#include <iostream>
#include <array>
const int size = 5;

void input(std::array<int, size> &input)
{
  for (int i = 0; i < size; i++)
  {
    std::cin >> input[i];
  }
}

void output(std::array<int, size> &output)
{
  // range based for loop
  for (int i : output)
  {
    std::cout << i << std::endl;
  }
}
int main()
{
  std::array<int, 5> array;
  input(array);
  output(array);

  return 0;
}