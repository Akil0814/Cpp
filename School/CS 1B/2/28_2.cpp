#include <iostream>
#include <string.h>
#include <unordered_set>
#include <vector>
using namespace std;

int *mergeArrays(int *arr1, int size1, int *arr2, int size2)
{
    int *mergePtr = new int[size1 + size2];
    int j = 0;
    int i = 0;
    int index = 0;
    while (i < size1|| j < size2 )
    {
        if (arr1[i] > arr2[j])
        {
            mergePtr[index] = arr2[j];
            index++;
            j++;
        }
        if (arr1[i] < arr2[j])
        {
            mergePtr[index] = arr1[i];
            index++;
            i++;
        }
        if (arr1[i] == arr2[j])
        {
            mergePtr[index] = arr1[i];
            index++;
            mergePtr[index] = arr2[j];
            index++;
            i++;
            j++;
        }
    }
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << mergePtr[i] << " ";
    }

    return mergePtr;
}

int main()
{
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int *ptr = mergeArrays(arr1, 3, arr2, 3);

    delete[] ptr;

    return 0;
}
