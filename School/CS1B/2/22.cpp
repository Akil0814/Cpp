#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int col=3;
const int row=3;

void show(char arr[col][row])
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }

}

int main()
{
    char arr[3][3]={{'#','#','#'},{'#','#','#'},{'#','#','#'}};
    show(arr);
    return 0;
}
