#include<iostream>
using namespace std;

int main()
{
    int a=3;//声明普通的整形变量
    int& ra=a;//创建引用ra，ra是a的别名

    cout<<"a's address:"<<&a<<", a is "<<a<<endl;
    cout<<"ra's address:"<<&ra<<", ra is "<<ra<<endl;


    return 0;
}
