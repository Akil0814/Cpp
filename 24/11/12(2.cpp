#include<iostream>
using namespace std;

class A
{
    private:
    int ma=10;
    public:
    int mb=20;

    void func()//使用公有函数间接访问ma
    {
        ma=11;
        cout<<"ma= "<<ma<<ma<<endl;
    }
};

class B:public A
{

};
int main()
{
    B b;
    //b.ma=10;//无法直接访问ma
    b.func();//使用公有函数间接访问ma

    return 0;
}
