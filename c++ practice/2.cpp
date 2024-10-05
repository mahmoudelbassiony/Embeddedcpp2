#include <iostream>
 
int main(){
    int* dynamicpointer =new int;
    int* dynamicarray = new int[5];
    *dynamicpointer = 10;
    for (int i =0 ; i<5 ;i++)
    {
        dynamicarray[i] = i * 10;

    }
    std::cout << *dynamicpointer <<std::endl;
    for (int i=0; i<5 ; ++i){
        std::cout << dynamicarray[i] << "   ";
        }
        delete dynamicpointer;
        delete[] dynamicarray;
    }

