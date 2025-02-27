#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

template<typename T>
void swapT(T* t1,T* t2)
{
    T tmp=*t1;
    *t1=*t2;
    *t2=tmp;
}


int main()
{
    int x=3;
    int y=4;
    cout<<x<<" "<<y<<endl;
    swapT(&x,&y);
    cout<<x<<" "<<y<<endl;

    return 0;
}
