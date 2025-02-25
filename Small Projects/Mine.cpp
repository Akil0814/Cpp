#include <iostream>
using namespace std;

constexpr int col=9;
constexpr int row=9;

constexpr int MineBoard=1;
constexpr int ShowBoard=0;

char boardShow[col][row];
char boardMine[col][row];


void intBoard()
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
            boardShow[i][j]='#';
    }

}

void showBoard()
{
    cout<<"  ";
    for(int i=0;i<row;i++)
        cout<<i+1<<" ";
        cout<<endl;
    for(int i=0;i<col;i++)
    {
        cout<<i+1<<" ";
        for(int j=0;j<row;j++)
            cout<<boardShow[i][j]<<" ";
        cout<<endl;
    }
    cout<<"______________________"<<endl;
}

int main()
{
    intBoard();
    showBoard();
    return 0;
}

