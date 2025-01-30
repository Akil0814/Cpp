#include<iostream>
using namespace std;

int main()
{
    int* px= nullptr;//创建指针并滞空
    px= new int;//为指针在堆区分配新内存
    *px=5;
    int x=*px;

    //浅拷贝
    //拷贝对象的指针 并不会创新的内存 当原变量内存被释放时
    //会导致指针*py滞空变成野指针
    

    cout<<"x:"<<x<<endl;

    cout<<"px:"<<px<<endl;

    cout<<"px*:"<<*px<<endl;

    delete px;

    return 0;
}