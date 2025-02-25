#include<iostream>
#include<string.h>
using namespace std;


template <class T>
class Vector
{
private:
    int len;
    T* items;
public:
    Vector(int size=10):len(size)
    {
        items=new T[len];
    }
    ~Vector()
    {
        delete[] items;
        items=nullptr;
    }

    void resize(int size)
    {
        if(size<=len)
         return;
        
        T*tmp=new T[size];
        for(int ii=0;ii<len;ii++)
            tmp[ii]=items[ii];
        delete[] items;
        items=tmp;
        len=size;
    }

    int size()const
    {
        return len;
    }

    T& operator[](int ii)//重载操作符[] 可以修改数组中的元素
    {
        if(ii>=len)
            resize(ii+1);//扩展数组
        return items[ii];
    }

    const T& operator[](T ii) const
    {
        return items[ii];
    }

};


int main()
{
    Vector<string> aa(1); //创建模板类Vector的对象//更通用 可以自动扩展

    aa[0]=5; aa[1]=9; aa[2]=6; aa[3]=1; aa[4]=3;

    for(int i=0;i<5;i++)
    {
        cout<<"aa "<<i<<" "<<aa[i]<<endl;
    }

    return 0;
}

