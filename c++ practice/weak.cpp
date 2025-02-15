#include <iostream>
#include <memory>
using namespace std;
class Rectangle
{
private:
  int length;
  int breadth;

public:
  Rectangle(int l, int b)
  {
    length = l;
    breadth = b;
  }
  int area()
  {
    return length * breadth;
  }

  ~Rectangle()
  {
    std::cout << "Deleted" << std::endl;
    }
};
int main()
{
  shared_ptr<Rectangle> P1(new Rectangle(10, 5));

  weak_ptr<Rectangle> P2(P1);
  weak_ptr<Rectangle> P3(P1);

  cout << P1->area() << endl;
  cout << P1.use_count() << endl;

  return 0;
}