#include<iostream>
using namespace std;

int main()
{
    //->指定返回类型
    auto f=[](const int& no)->double{
        cout<<"auto f[] "<<no<<endl;
    };

    f(312);

    return 0;
}
