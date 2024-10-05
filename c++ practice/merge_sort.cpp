#include <iostream>
void merge(int arr[], int const left, int const mid, int const right)
{
    const int subArrayone = mid - left + 1;
    const int subArraytwo = right - mid;

    // Create temp Array
    auto *leftArray = new int[subArrayone], *rightArray = new int[subArraytwo];
    for (int i = 0; i < subArrayone; i++)
    {
        rightArray[i] = arr[left + i];
    }
    for (int j = 0; j < subArraytwo; j++)
    {
        rightArray[j] = arr[mid + 1 + j];
    }
    int i = 0,
        j = 0,
        k = left;
    while (i < subArrayone && j < subArraytwo)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
        }

            k++;
        }
        while (i < subArrayone)
        {

            arr[k] = leftArray[i];
            i++;
            k++;
        }
    
    while (j < subArraytwo)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
    delete[] leftArray;
    delete[] rightArray;
}


    void mergeSort(int array[], const int begin, const int end)
    {
        if (begin >= end)
        {
            return;
        }
        auto mid = begin + (end - begin) / 2;
        mergeSort(array, begin, mid);   // left array .
        mergeSort(array, mid + 1, end); // right array.
        merge(array, begin, mid, end);
    }
    void printArray(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
    }


    int main()
    {
        int arr[] = {1, 5, 2, -5, 20, -3, 40};
        int sizeArr = sizeof(arr) / sizeof(arr[0]);
        std::cout << "given array is  :  ";
        printArray(arr, sizeArr);
        mergeSort(arr, 0, sizeArr - 1);

        std::cout << "\nsorted Array is : ";
        printArray(arr, sizeArr);
        return 0;
    } 