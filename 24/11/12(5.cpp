#include <iostream>
#include <string.h>
using namespace std;

void *operator new(size_t size)
{
    void *ptr = malloc(size);
    cout << "new address is:" << ptr << " size is " << size << endl;
    return ptr;
}
void operator delete(void *ptr)
{
    cout << "delete new" << endl;
    if (ptr == 0)
        return;
    free(ptr);
}
class A // 基类
{
public:
    int m_a = 10;

protected:
    int m_b = 20;

private:
    int m_c = 30;

public:
    A()
    {
        cout << "A this* " << this << endl;
        cout << "A m_a " << &m_a << endl;
        cout << "A m_b " << &m_b << endl;
        cout << "A m_c " << &m_c << endl;
    }
    ~A()
    {
        cout << "~A" << endl;
    }
    void show()
    {
        cout << "a= " << m_a << " b= " << m_b << " c= " << m_c << endl;
    }
};

class B : public A // 子类//派生类
{
public:
    int m_d = 40;
    B()
    {
        cout << "B this* " << this << endl;
        cout << "B m_a " << &m_a << endl;
        cout << "B m_b " << &m_b << endl;
        // cout<<"B m_c "<<&m_c<<endl;//私有成员无法访问
        cout << "B m_d " << &m_d << endl;
        cout << "B" << endl;
    }
    ~B()
    {
        cout << "~B" << endl;
    }
    void show1()
    {
        cout << "d= " << m_d << endl;
    }
};
int main()
{
    cout << "size of a is " << sizeof(A) << endl;
    cout << "size of b is " << sizeof(B) << endl;
    B *p = new B; // 使用new方法创建派生类对象p
    p->show();
    p->show1();              // 使用指针调用共有成员函数
    memset(p, 0, sizeof(B)); // 使用memset 把派生类全部成员变量的值清零
    // 类的访问权限是语法限制 可以使用指针突破限制
    *((int *)p + 2) = 31; // 强制类型转化p 使用指针访问类中定义的变量
    // 把基类私有成员m_c的值修改成31
    p->show();
    p->show1(); // 再次显示代码

    delete p;

    return 0;
}
