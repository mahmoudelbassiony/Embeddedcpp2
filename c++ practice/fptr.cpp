#include<iostream>
#include <array>
void Printvalue(int value)
{
   std::cout << "value is : " << value << std::endl;
}
void func(int number)
{
   std::cout << number *5 << std::endl;  
}

void FOREACH(std::array <int, 5> arr, void(*funptr)(int))  // void(*funptr)(int) => this is api.

{
   for(auto i: arr)
   {
          funptr(i); 
   }
}
 int main()
 {
       std::array<int, 5> arr = { 1, 5, 4 , 9 , 3 };
       FOREACH(arr, Printvalue );       //u could use the func to calculate th enumber.
       
 
      return 0;
       
    }
