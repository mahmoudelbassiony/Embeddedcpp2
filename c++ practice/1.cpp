#include <iostream>
#include <array>
int main ()  
{
    int arr[] = {9 , 4 , 3 , 2 , 5};

    int *ptr2 = arr;
    std::cout << &arr[0] << std::endl;
    std::cout << ptr2 << std::endl;
    ptr2++;
    std::cout<< ptr2 << std::endl;
    std::cout << *ptr2 << std::endl;
    return 0 ;

}   