#include<algorithm>
#include<iostream>
#include<vector>
using  namespace std;

template<typename T>
struct Count//计算同一对象的出现次数
{
    T m_size;//对象名
    int m_count;//对象个数

    Count(const T size):m_size(size),m_count(0){}//传入需要统计的size//初始化列表

    void operator()(const T& size)//重载()操作符//仿函数
    {
        if(size==m_size)
            m_count++;
    }

};

int main()
{
    vector<int>v={1,3,2,4,1,2,3,1,4,3};

    Count<int> a=for_each(v.begin(),v.end(),Count<int>(1));//统计1出现的次数 

    cout<<"a.m_count="<<a.m_count<<endl;

    return 0;
}
