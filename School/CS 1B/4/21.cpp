#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    auto h = [x]()
    {
        x += 2;
        cout << x << endl;
    };
    h();

    return 0;
}
