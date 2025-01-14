#include<iostream>
using namespace std;

void func(const string&message="saber")
{
    cout<<"akil "<<message<<endl;
}

int main()
{
    func(" mai");
    func();

    return 0;
}