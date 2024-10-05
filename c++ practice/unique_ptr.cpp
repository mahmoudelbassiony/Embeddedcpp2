#include <iostream>
#include <memory>
using namespace std;
class MyClass
{
public:
  // default

  MyClass()

  {
    std::cout << "Constructor invoked" << std::endl;
  }
  ~MyClass()
  {
    std::cout << "Destructor invoked" << std::endl;
  }
};

int main()
{
  std::unique_ptr<MyClass> ptr(new MyClass());
  {
    std::unique_ptr<MyClass> ptr2(new MyClass());
  }

  std::cin.get();
}