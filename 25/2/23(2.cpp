//c++断言
#include<iostream>
#include<cassert>
using namespace std;

void copydata(void* ptr1,void *ptr2)
{
    assert(ptr1&&ptr2);//断言ptr1和ptr2都不能为空
    cout<<"继续执行复制函数"<<endl;
}

int main()
{
    //const int i=0,j=0;//静态断言失败
    const int i=1,j=0;//静态断言不会出问题 


    static_assert(i," i的值不合法");//静态断言

    //copydata(nullptr,&j);//断言报错
    //copydata(&i,&j);//不会出问题


    return 0;
}
