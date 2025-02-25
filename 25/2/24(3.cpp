//lambda表达式
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

void show1(const int& no)
{
    cout<<"show 1 "<<no<<endl;
}

class A
{
public:
    void operator()(const int& no)//仿函数
    {
        cout<<"operator() "<<no<<endl;
    }
}

int main()
{
    vector<int> num={1,2,3};

    for_each(num.begin(),num.end(),show1);//普通函数

    for_each(num.begin(),num.end(),A);//仿函数

    

    return 0;
}
