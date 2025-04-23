#include <iostream>
using namespace std;

struct lam
{
    int operator()(int a, int b)
    {
        return a+b;
    }

};


int main()
{
    lam fl;

    auto f = [](int a, int b)
    {
        return a + b;
    };

    cout << f(3, 4) << endl;
    cout << fl(3, 4) << endl;
    cout<< lam()(3,4)<<endl;//创建匿名临时对象


    return 0;
}
