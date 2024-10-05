#include<iostream>
#include <array>
#include <functional>

void FOREACH(std::array <int, 5> arr, std::function<int(int)>funptr)  // void(*funptr)(int) => this is api.

{
   for(auto i: arr)
   {
          funptr(i); 
   }
}

 int main()
 {
          std::array<int, 5> arr = { 1 , 5 , 4 , 9 , 3 };
       

       int a =5;

         auto lambda =[] (int value){
        std::cout << "vlaue is: " << value << std::endl;
    };

    auto lambda2 =[a](int number) mutable -> int {  //mutable return the value to the original one.
        a=3;
        std::cout  << number *a << std::endl;
          return 5;
    };
     FOREACH(arr, lambda2 );       //u could use the func to calculate th enumber.
 
     std::cout <<  "Value of a is : " << a << std::endl;

      return 0;
      
          }
