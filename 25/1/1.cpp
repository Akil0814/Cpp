#include<iostream>
using namespace std;

template<typename T1,typename T2>
void func(T1 x,T2 y)
{
    auto tmp=x+y;
    cout<<tmp<<endl;
}


int main()
{
    int a=5;
    short b=3;
    func(a,b);

    return 0;
}
