#include <iostream>
using namespace std;

class A
{
public:
    virtual void func()
    {
        cout << "A func" << endl;
    }
};

class aa : public ::A
{
public:
    void func() override
    {
        cout << "aa func" << endl;
        A::func();
    }
};

int main()
{
    //aa *ptr = new aa;
    //A *ptr = new aa;

    //ptr->func();
    //ptr->A::func();
    aa().func();

    return 0;
}
