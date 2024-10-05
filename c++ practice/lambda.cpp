#include<iostream>
#include <array>


void FOREACH(std::array <int, 5> arr, void(*funptr)(int))  // void(*funptr)(int) => this is api.

{
   for(auto i: arr)
   {
          funptr(i); 
   }
}




 int main()
 {
    auto lambda =[] (int value){
        std::cout << "vlaue is: " << value << std::endl;
    };

    auto lambda2 =[](int number){
        std::cout << "value is: " << number *5 << std::endl;
    };

       std::array<int, 5> arr = { 1 , 5 , 4 , 9 , 3 };
       FOREACH(arr, lambda2 );       //u could use the func to calculate th enumber.
       
 
      return 0;
      
    }
