#include <iostream>
using namespace std;

struct MyAdder {
    int x;
    MyAdder(int val) : x(val) {}

    int operator()(int a)
    {
        return a + x;
    }
};
int main()
{
    //MyAdder f;

    cout << MyAdder(100)(23) << endl;  // 输出 123

    return 0;
}
