#include <iostream>
using namespace std;

void test(int& x)
{
    cout<<"左值"<<endl;
}
void test(int&& x)
{
    cout<<"右值"<<endl;
}

template<typename T>
void wrapper(T&& arg)//T&& 万能引用
{
    test(std::forward<T>(arg));//forward会保留值属性
}

int main()
{
    int a=10;
    wrapper(a);
    wrapper(20);

    return 0;
}
