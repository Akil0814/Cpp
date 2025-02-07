//string 容器
//可以用于存放其他类型的数据
#include<iostream>
#include<string>
using namespace std;

//int size() const//返回容器中数据的大小(容器语义)

// void reserve(size_t size=0);//将容器的容量设置为至少size。void clear();

//void resize(int len,char c=0);//把容器的实际大小设置为len 如果len小于实际大小 会截断多出来的部分，
//如果len大于实际大小 就用字符c填充

//截取 //string substr(size_t pos=0;,size_t n=npos)const;//返回pos开始的n个字节组成的子容器

int main()
{
    char cc[8];//在栈上分配8字节的内存空间

    //把cc的内存空间用于int型整数
    int* a;
    int* b;
    a=(int*)cc;//前4个字节的空间用于整数a
    b=(int*)cc+1;//后4个字节的空间用于整数b
    *a=1234;
    *b=2345;
    cout<<"*a="<<*a<<endl;
    cout<<"*b="<<*b<<endl;

    return 0;
}