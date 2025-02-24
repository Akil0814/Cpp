#include<iostream>
using namespace std;

int main()
{
    double* ptr=nullptr;
    // try
    // {
    //     ptr=new double[10000000000000];//分配内存太大//不用try catch 程序会挂掉

    // }
    // catch(bad_alloc&)
    // {
    //     cout<<"分配内存失败"<<endl;
    // }

    ptr=new(std::nothrow)double[10000000000000];//效果相同
    if(ptr==nullptr)
        cout<<"分配内存失败"<<endl;

    if(ptr!=nullptr)
        delete []ptr;
}
