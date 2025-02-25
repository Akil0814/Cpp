//委托构造
#include<iostream>
using namespace std;
//注意不要互相委托造成死循环

class AA
{
private:
    int      m_a;
    int      m_b;
    double   m_c;
public:
    // 有一个参数的构造函数，初始化m_c
    AA(double c) {
        m_c = c + 3;     // 初始化m_c
        cout << " AA(double c)" << endl;
    }
    // 有两个参数的构造函数，初始化m_a和m_b
    AA(int a, int b) {
        m_a = a + 1;     // 初始化m_a
        m_b = b + 2;    // 初始化m_b
        cout << " AA(int a, int b)" << endl;
    }
    // 构造函数委托AA(int a, int b)初始化m_a和m_b
    AA(int a, int b, const string& str) : AA(a, b) {
        cout << "m_a=" << m_a << ",m_b=" << m_b << ",str=" << str << endl;
    }
    // 构造函数委托AA(double c)初始化m_c
    AA(double c, const string& str) : AA(c) {
        cout << "m_c=" << m_c << ",str=" << str << endl;
    }
};

int main()
{
    AA a1(10, 20, "akil");
    AA a2(3.8, "mai");

    return 0;
}

