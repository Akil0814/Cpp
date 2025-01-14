#include <iostream>
using namespace std;

int kkdy(int a, int b)
{
    int min;
    if(a>=b){
        min=b;
    }
    else{
        min=a;
    }
    return min;
}
int main()
{
    int i=9;
    int j=10;
    int y=kkdy(i,j);
    cout<<y;

    return 0;
}
