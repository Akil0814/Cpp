//lambda表达式
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

void show1(const int& no)
{
    cout<<"show1 "<<no<<endl;
}

class A
{
public:
    void operator()(const int& no)//仿函数
    {
        cout<<"operator() "<<no<<endl;
    }
};

int main()
{
    vector<int> num={1,2,3};

    for_each(num.begin(),num.end(),show1);//普通函数

    for_each(num.begin(),num.end(),A());//仿函数


    auto f=[](const int& no)
    {
        cout<<"lambda f "<<no<<endl;
    };

    for_each(num.begin(),num.end(),f);//效果和下面相同

    // for_each(num.begin(),num.end(),//lambda表示式//不需要提前准备函数或仿函数
    //     [](const int& no)
    //     {
    //         cout<<"lambda "<<no<<endl;
    //     });

    f(1023);//也可以像普通函数一样调用


    return 0;
}
