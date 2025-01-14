#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        cout<<"a is["<<i<<"]"<<a[i]<<endl;
    }

    int* p=a;
    for(int i;i<5;i++)
    {
        cout<<"*(p+ "<<i<<")is "<<*(p+i)<<endl;
        cout<<"p+ "<<i<<"is "<<p[1]<<endl;
    }

    return 0;
}
