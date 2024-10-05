#include <iostream>

void func(const int &num) // Lvalue
{
  std::cout << "Lvalue Ref " << std::endl;
}
// void func(int num)
// {
//   std::cout << "Normal" << std::endl;
// }
void func(int &&num)
{
  std::cout << "Rvalue Ref " << std::endl;
}

int main()
{
  int i = 10;
  func(10);
}