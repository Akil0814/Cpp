#include <iostream>
using namespace std;

class Test
{
public:
    Test(int x)
    {
        this->x=x;
        cout<<"defult "<<x<<endl;
    }
    Test(const Test&)
    {
        cout<<"copy "<<x<<endl;
    }
    Test(Test&&)
    {
        cout<<"move "<<x<<endl;
    }
    ~Test()
    {
        cout<<"destructor"<<x<<endl;
    }

    int x=0;
};

Test makeTest1()//只输出defult
{
    return Test(2);//匿名构造//返回临时对象//没有创建Test类型的变量直接返回临时对象
}

Test makeTest2()//调用移动语义
{
    Test tmp(1);
    return tmp;
}

int main()
{
    Test t=makeTest1();//不会构造x=默认值的对象
    //Test t=makeTest2();

    cout<<"after"<<endl;
    //g++ 16.cpp -fno-elide-constructors -o 16 //禁止编译器优化
    //./16

    return 0;
}
