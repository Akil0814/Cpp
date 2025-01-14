#include<iostream>
using namespace std;

template <class DataType>
class Stack  //栈类
{
private:
    DataType* items;     //栈数组
    DataType stacksize;  //栈实际的大小
    DataType top;        //栈顶指针
public:
    //构造函数：1；分配栈数组内存 2；把栈顶指针初始化为0
    Stack(DataType size):stacksize(size),top(0)
    {
        items=new DataType[stacksize];
    }
    ~Stack()
    {
        delete[] items;
        items=nullptr;
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
    Stack<int> ss(5);//创建栈对象 大小为5
    //用模板类创建对象时要指明数据类型

    //元素入栈
    ss.push(1);
    ss.push(2);
    ss.push(3);
    ss.push(4);
    ss.push(5);

    //元素出栈
    int item;//出栈元素数据类型要一致
    
    while(ss.isempty()==false)
    {
        ss.pop(item);
        cout<<"item= "<<item<<endl;
    }


    return 0;
}
