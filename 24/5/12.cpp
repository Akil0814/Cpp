#include<iostream>
using namespace std;

void myswap(int& a,int& b)
{
    int tmp = a; a=b; b=tmp;
}

void myswap(string& a,string& b)
{
    string tmp = a; a=b; b=tmp;
}

int main()
{
    int a=3,b=5;
    cout<<"a="<<a<<" b="<<b<<endl;
    myswap(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;

    string c="mai",d="saber"; 
    cout<<"c="<<c<<" d="<<d<<endl;
    myswap(c,d);
    cout<<"c="<<c<<" d="<<d<<endl;

    return 0;

}