#include <iostream>
 void func(int *p , int*q)
 {
    p =q;
    *p = 2;
 }
int main ()  
{
    int i= 0 , j=1 ;
    func (&i ,&j);
    std::cout << i << " " << j << std::endl;
    return 0 ;

}   