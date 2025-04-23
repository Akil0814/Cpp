#include <iostream>
using namespace std;

int main()
{
    int m = 5, n = 9;
    auto j = [=, &n]() mutable
    {
        m += 1;//修改的是 m 的副本（因为 [=] 捕获）
        n += 1;//修改的是 n 的引用（因为 &n）
    };
    j();
    cout << m << " " << n << endl;

    return 0;
}
