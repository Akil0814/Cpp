//嵌套使用模板类

#include<iostream>
#include<string.h>
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

};


template <class DataType>
class Stack  //栈类
{
private:
    DataType* items;     //栈数组 //成员变量是指针 使用了堆区内存//对于Stack类浅拷贝是不行的，需要重写拷贝构造函数和赋值函数 
    int stacksize;  //栈实际的大小
    int top;        //栈顶指针
public:
    //构造函数：1；分配栈数组内存 2；把栈顶指针初始化为0
    Stack(int size=3):stacksize(size),top(0)
    {
        items=new DataType[stacksize];
    }
    ~Stack()
    {
        delete[] items;
        items=nullptr;
    }

    Stack& operator=(const Stack& v)
    {
        delete[] items;  //释放原内存
        stacksize=v.stacksize;  //栈实际大小
        items=new DataType[stacksize];// 重新分配数组
        for(int ii=0;ii<stacksize;ii++)//复制数组中的元素
            items[ii]=v.items[ii];
            top=v.top;//栈顶指针
            return *this;
    }

    bool isempty() const//判断栈是否为空
    {
        /*if(top==0)
         return 0;*////等价
        return top==0;
    }
    bool isfull() const//判断栈是否已满
    {
        return top==stacksize;
    }
    bool push(const DataType& item)//元素入栈
    {
        if(top<stacksize)
        {
            items[top++]=item;
            return true;
        }
        return false;
    }
    bool pop(DataType& item)//元素出栈
    {
        if(top>0)
        {
            item=items[--top];
            return true;
        }
        return false;
    }
};


int main()
{
    //数组中有栈容器
    //Vector容器的缺省大小是2，Stack容器缺省大小是3
    //1 创建Vector容器；容器中的容器的元素用Stack
    Vector<Stack<string> >vs;//vs是一个vector容器，容器中的内容是Stack//容器中的容器
    Stack<string>vs1[2];//所有等价vs
    string vs2[2][3];

    //2 手工的往容器中插入数据
    vs[0].push("akil1");vs[0].push("akil2");vs[0].push("akil3");  //容器中的第一个栈//入栈三个元素
    vs[1].push("mai1");vs[1].push("mai2");vs[1].push("mai3");  //容器中的第二个栈
    //vs[2].push("CC");vs[2].push("CC");//自动扩展时报错

    //3 用嵌套循环 把容器中的数据显示出来
    for(int ii=0;ii<vs.size();ii++)//遍历Vector容器
    {
        while(vs[ii].isempty()==false)//遍历Stack容器
        {
            string item;
            vs[ii].pop(item);//使用循环使所有元素出栈
            cout<<"item="<<item<<endl;
        }
    }
     
    return 0;
}

