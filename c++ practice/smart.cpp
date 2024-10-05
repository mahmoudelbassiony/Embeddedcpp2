#include <iostream>
using namespace std;
template <class T>

class Smart_ptr
{
private:
  T *ptr;

public:
  explicit Smart_ptr() = default;
  explicit Smart_ptr(int *pointer = NULL)
  {
    ptr = pointer;
  }
  Smart_ptr(const Smart_ptr &other) = delete; // no copy constructor.

  Smart_ptr &operator=(const Smart_ptr &) = delete; // no assignment operator.

  T &operator*()
  {
    return *ptr;
  }
  ~Smart_ptr()
  {
    std::cout << "freed" << std::endl;
    delete ptr;
  }
};
int main()
{

  Smart_ptr<int> ptr(new int(10));

  *ptr = 20;
  std::cout << *ptr << std::endl;
  std::cin.get();

  return 0;
}
