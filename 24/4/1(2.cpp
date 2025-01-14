#include<iostream>
using namespace std;
int main()
{
    int x = 1;
    int *px = &x;
    int **ppx = &px;
    cout<<"x= "<<x<<endl;//x的值
    cout<<"px= "<<px<<endl;//x的地址
    cout<<"*px= "<<*px<<endl;//x值
    cout<<"ppx= "<<ppx<<endl;//指针*px的地址
    cout<<"**ppx= "<<**ppx<<endl;//x的值

    return 0;
}