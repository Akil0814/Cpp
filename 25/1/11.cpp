//后置返回值类型
//int func(int x,double y);//两行代码等价
//auto func(int x,double y) ->int;

#include <iostream>
using namespace std;

template<typename T1,typename T2>//创建全类型通用模板
auto func(T1 x,T2 y) -> decltype(x+y)
{
    decltype(x+y)tmp=x+y;
    cout<<"tmp="<<tmp<<endl;

    return tmp;
}


//函数返回值可以用auto 不必尾随返回值类型
/*template<typename T1,typename T2>
auto func(T1 x,T2 y)
{
    decltype(x+y)tmp=x+y;
    cout<<"tmp="<<tmp<<endl;

    return tmp;

}*/ //编译也能通过


int main()
{
    func(3,'h');

    return 0;
}
