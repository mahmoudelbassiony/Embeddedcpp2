#include <iostream>
#include<memory>
using namespace std;
class Rectangle
{
private:
  int length;
  int width;

public:
  Rectangle(int l, int w)
  {
    length = l;
    width = w;
  }
  int area() {
     return length * width;
    }
};
int main()
{
  std::shared_ptr<int> shared(new int(25));
  std::cout << *shared << std::endl;
  std::shared_ptr<int> copy(shared);
  std::cout << *copy << std::endl;
  std::cout << shared.use_count() << std::endl;
  {
    std::shared_ptr<int> three(shared);
    std::cout << shared.use_count() << std::endl;
  }
  std::cout << shared.use_count() << std::endl;



  return 0;
}