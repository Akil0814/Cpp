//重载new&delete
//主要目的是实现内存池

#include<iostream>
using namespace std;

void* operator new(size_t size)
{
    cout<<"use my new; "<<size<<" bit"<<endl;
    void*ptr=malloc(size);
    cout<<"use mamery:"<<ptr<<endl;

    return ptr;
}
void operator delete(void*ptr)
{
    cout<<"use my delete"<<endl;
    if(ptr==0)
        return;
    free(ptr);
}



int main()
{
    int* p1=new int (3);
    cout<<"p1="<<(void*)p1<<" *pi"<<*p1<<endl;
    delete p1;

    return 0;
}
