#include <iostream>
#include <memory>
using namespace std;
class Rectangle
{
  int length;
  int breadth;

public:
  Rectangle(int l, int b)
  {
    length = l;
    breadth = b;
  }
  int area() { return length * breadth; }
};

int main()
{
  std::unique_ptr<int> ptr = std::make_unique<int>(25);
  std::unique_ptr<Rectangle> rect = std::make_unique<Rectangle>(5, 6);
  std::cout << *ptr << "  " << &ptr << std::endl;
  std::unique_ptr<int> ptr2 = std::move(ptr);

  // std::cout << *ptr << "  " << &ptr << std::endl;
  std::cout << *ptr2 << "  " << &ptr2 << std::endl;
  return 0;
}