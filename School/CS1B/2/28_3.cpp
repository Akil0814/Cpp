#include <fstream>
#include <iostream>

using namespace std;

int ***allocate3DArray(int dim1, int dim2, int dim3)
{
    int ***pd3 = new int **[dim3];
    for (int i = 0; i < dim3; i++)
    {
        pd3[i] = new int *[dim2];
        for (int j = 0; j < dim2; j++)
        {
            pd3[i][j] = new int[dim1];
        }
    }

    // for(int x=0;x<dim3;x++)
    // {
    //     for(int y=0;y<dim2;y++)
    //     {
    //         for(int z=0;z<dim1;z++)
    //             pd3[x][y][z]=x+y+z;
    //     }
    // }

    return pd3;
}

void fill3DArray(int ***arr, int dim1, int dim2, int dim3, const string filePath)
{
    ifstream fin(filePath, ios::in);

    for (int x = 0; x < dim3; x++)
    {
        for (int y = 0; y < dim2; y++)
        {
            for (int z = 0; z < dim1; z++)
            {
                fin >> arr[x][y][z];
            }
        }
    }
}

void print3DArray(int ***arr, int dim1, int dim2, int dim3)
{
    for (int x = 0; x < dim3; x++)
    {
        for (int y = 0; y < dim2; y++)
        {
            for (int z = 0; z < dim1; z++)
                cout << arr[x][y][z] << " ";
            cout << endl;
        }
        cout << endl;
    }
}

void deallocate3DArray(int*** arr, int dim2, int dim3)
{
    for (int i = 0; i < dim3; i++) {
        for (int j = 0; j < dim2; j++) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;
}

// Example Input
// File content:
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// ... (up to 60 values)

// Example Output
// 3D Array:
// Layer 1:
// 1 2 3 4 5
// 6 7 8 9 10
// ...
// Layer 2:
// 21 22 23 24 25
// ...
// Layer 3:
// 41 42 43 44 45
// ...

int main()
{
    int x, y, z;
    string file = R"(3Darr.txt)";
    cin >> x >> y >> z;
    int ***pd3 = allocate3DArray(x, y, z);
    fill3DArray(pd3, x, y, z, file);
    print3DArray(pd3, x, y, z);

    deallocate3DArray(pd3,y,z)

    return 0;
}
