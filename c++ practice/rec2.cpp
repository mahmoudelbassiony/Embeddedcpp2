
// Destructor
#include <iostream>
#include <ostream>

class Rectangle

{
   // Attributes
private:
   float length;
   float width;
   static int count;

   // Methods
public:
   // Default constructor
   Rectangle() : length(0), width(0)
   {
      count++;
      std::cout << "Default constructor created" << std::endl;
   }

   // parameterized constructor
   Rectangle(float len, float wid) : length(len), width(wid)

   {
      count++;
      std::cout << "parameterized constructor created" << std::endl;
   }

   // copy constructor .

   Rectangle(const Rectangle &object)
   {
      count++;
      length = object.length;
      width = object.width;
      std::cout << "copy constructor called" << std::endl;
   }

   friend std::ostream &operator<<(std::ostream &output, const Rectangle &rect);

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

   Rectangle mergeRectangle(const Rectangle r2, const Rectangle r1)
   {
      Rectangle r3;

      r3.length = r1.length + r2.length;
      r3.width = r1.width + r2.width;

      return r3;
   }
   // operator overloading
   Rectangle operator+(const Rectangle r1)
   {
      Rectangle r3;

      length = length + r1.length;
      width = width + r1.width;
      return r3;
   }
   int getcount()
   {
      return count;
   }

   //  Destructor    ----> (~) used for destructor.

   ~Rectangle()
   {
      std::cout << "Destructor called" << std::endl;
   }
};
// Friend

std::ostream &operator<<(std::ostream &output, const Rectangle &rect)
{
   output << rect.length << " " << rect.width;

   return output;
}
int Rectangle::count = 0;

int main()
{
   Rectangle rec1(2, 3);
   std::cout << rec1.getcount() << std::endl;
   Rectangle rec2(rec1);
   std::cout << rec2.getcount() << std::endl;
   return 0;
}
