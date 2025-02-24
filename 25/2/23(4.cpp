#include<iostream>
using namespace std;


void func(const int len1)
{
    // len1是只读变量，不是常量。
    int array1[len1]={0};        // VS会报错，Linux平台的数组长度支持变量，不会报错

    //constexpr 常量
    //const 只读

    const int len2 = 8;
    int array2[len2]={0};      // 正确，len2是常量
}

int main()
{
    func(1);

    return 0;
}
