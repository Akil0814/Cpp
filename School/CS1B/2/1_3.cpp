#include <iostream>
using namespace std;

int findMaxIn2DArray(int arr[][5], int rows)
{
    int max=0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    
    return max;
}

int main()
{
    const int rows = 2;

    int arr[][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    
    cout << "Maximum element in the array: " << findMaxIn2DArray(arr, rows) << endl;
    
    return 0;
}