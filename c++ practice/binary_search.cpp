#include <iostream>
 
int binarySearch(int arr[], int left, int right, int key)
{
    int middel = (left + right) / 2;
    while (left <= right)
    {
        if (arr[middel] == key)
        {
            return middel;
        }
        if (key < arr[middel])
        {
            right = middel - 1;
            middel = (left + right) / 2;
        } 
        else
        {
            left = middel + 1;
            middel = (left + right) / 2;
        }
    }
    return - 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    int left = 0, right = size - 1;
    std::cin >> key;

    int result = binarySearch(arr, left, right, key); // calling
    if (result == -1)
    {
        std::cout << "key is not found" << std::endl;
    }
    else
    {
        std::cout << "the key (" << arr[result] << ")"
                  << "is found in index (" << result << ")" << std::endl;
    }
    return 0;
}
