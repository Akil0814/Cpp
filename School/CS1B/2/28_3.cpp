#include <iostream>
#include <string.h>
#include <unordered_set>
#include <vector>
using namespace std;

int*** allocate3DArray(int dim1, int dim2, int dim3)
{
    int*** pd3=new int**[dim3];
    for(int i=0;i<dim3;i++)
    {
        pd3[i]=new int*[dim2];
        for(int j=0;j<dim2;j++)
        {
            pd3[i][j]=new int[dim1];
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

void fill3DArray(int*** arr, int dim1, int dim2, int dim3, const char* filename)
{

}

void print3DArray(const int*** arr, int dim1, int dim2, int dim3)
{
    for(int x=0;x<dim3;x++)
    {
        for(int y=0;y<dim2;y++)
        {
            for(int z=0;z<dim1;z++)
                cout<<arr[x][y][z];
            cout<<endl;
        }
        cout<<endl;
    }

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
    int x,y,z;
    cin>>x>>y>>z;
    int*** pd3=allocate3DArray(x,y,z);
    print3DArray(pd3,x,y,z);


    delete[] pd3;

    return 0;
}
