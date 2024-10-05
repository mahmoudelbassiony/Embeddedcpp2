#include <iostream>

// Template
//  Generic programming

template <typename T ,typename S>  // You can also use keyword class instead of typename.
void swap(T *a, S *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}
template <typename T , typename S>
S add(T a, S b)
{
    return a + b;
}

    float add (int a , float b)
    {
        return a + b;
    }

int main()
{
    int x = 5 , y = 6;
    swap(&x,&y);
    std::cout << x << " " << y << std::endl;
    return 0;
}