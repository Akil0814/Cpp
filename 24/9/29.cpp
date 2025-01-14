#include <iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b) return a;

    return b;
}

int main()
{
    cout<<"max(5,8)"<<max(5,8)<<endl;

    return 0;
}
