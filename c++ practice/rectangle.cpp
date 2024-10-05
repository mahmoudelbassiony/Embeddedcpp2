#include <iostream>

class Rectangle
{
  // Methods
public:
  // Default constructor
  Rectangle() : length(0), width(0)
  {

    std::cout << "Default constructor created" << std::endl;
  }

  // parameterized constructor
  Rectangle(float len, float wid) : length(len), width(wid)

  {
    std::cout << "parameterized constructor created" << std::endl;
  }

  void setLength(float l)
  {
    if (l >= 0)
    {

      length = l;
    }
    else
    {
      std::cout << "error ! the number should be positive " << std::endl;
    }
  }
  float getLength()
  {
    return length;
  }

public:
  void setWidth(float w)
  {
    if (w >= 0)
    {

      width = w;
    }
    else
    {
      std::cout << "error ! the number should be positive " << std::endl;
    }
  }
  float getWidth()
  {
    return width;
  }

  float getArea()
  {
    return length * width;
  }

  // Attributes
private:
  float length;
  float width;
};

int main()
{
  Rectangle rec(2, 3); // <---- parameter
  // rec.setWidth(5);
  // rec.setLength(10);
  std::cout << rec.getArea() << std::endl;

  return 0;
}
// fe el output el parameterized hwa el haytnada 3ashan edenalo parameter foo2