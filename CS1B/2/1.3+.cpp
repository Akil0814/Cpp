#include <iostream>
using namespace std;

template <class T>//变长数组
class Vector
{
private:
    int len;
    T* items;
public:
    Vector(int size=2):len(size)//默认长度2
    {
        items=new T[len];
    }
    ~Vector()
    {
        delete[] items;
        items=nullptr;//滞空指针
    }

    Vector& operator=(const Vector& v)//重载操作符 进行深拷贝
    {
        delete[] items;  //释放原内存
        len=v.len;       //数组际大小
        items=new T[len];// 重新分配数组
        for(int ii=0;ii<len;ii++)//复制数组中的元素
            items[ii]=v.items[ii];

        return *this;
    }

    void resize(int size)
    {
        if(size<=len)
         return;
        T*tmp=new T[size];
        for(int ii=0;ii<len;ii++)
            tmp[ii]=items[ii];//复制c++内置类型没有问题  如果复制类，并且类中使用了堆区内存，就存在浅拷贝的问题
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
        if(ii>=len)//当长度
            resize(ii+1);//扩展数组
        return items[ii];
    }

    const T& operator[](T ii) const
    {
        return items[ii];
    }

/*    T findMax(const Vector<Vector<T>> items, int col, int row) const
    {
        T max=items[0][0];

        for(int i=0;i<col;i++)
        {
            for(int j=0;j<row;j++)
            {
                if(items[i][j]>max)
                    max=items[i][j];
            }
        }
        return max;
    }
*/

};


int main()
{
    int row=0;
    int col=0;
    Vector<Vector<int>> arr;


    cout<<"Enter the number of row you want:";
    cin>>row;//行
    cout<<"Enter the number of col you want:";
    cin>>col;//列


    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<"Enter "<<i+1<<" number for "<<j+1<<" row:";
            cin>>arr[i][j];
        }
    }

    int max=arr[0][0];

        for(int i=0;i<col;i++)
        {
            for(int j=0;j<row;j++)
            {
                if(arr[i][j]>max)
                    max=arr[i][j];
            }
        }

    cout<<max<<endl;

    return 0;
}