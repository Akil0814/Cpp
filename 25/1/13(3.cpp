#include<iostream>
#include<string.h>
using namespace std;
//定长数组

//template <class T,int len=10>//非通用类型可以有缺省值
template <class T,int len>
class Array
{
private:
    T items[len];
public:
    Array()
    {
        memset(items,0,sizeof(items));//memset函数可能会有内存问题//栈上分配内存
    }
    ~Array()
    {}

    T& operator[](T ii)//重载操作符[] 可以修改数组中的元素
    {
        return items[ii];
    }

    const T& operator[](T ii) const
    {
        return items[ii];
    }

};

int main()
{
    Array<int,10> aa;//可以更改《》内的数据类型// 10为数 组的大小
    aa[0]=5;
    aa[1]=9;
    aa[2]=6;
    aa[3]=1;
    aa[4]=3;
    for(int i=0;i<5;i++)
    {
        cout<<"aa"<<i<<" "<<aa[i]<<endl;
    }

    return 0;
}
