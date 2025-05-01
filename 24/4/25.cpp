#include<iostream>
using namespace std;

struct st_t
{
    int a;
    int *p;
};

int main()
{
    st_t stt;
    stt.p=new int[100];//动态创建一个长度为100的整型数组，让指针stt.p指向数组的地址

    cout<<"sizeof(stt)="<<sizeof(stt)<<endl;

    return 0;
}
