//内存池
//预先分配一大块内存
//提示分配和归还速度
//减少内存碎片
#include<iostream>
#include <string.h>


using namespace std;

class player
{
public:
    string name;//用类定义一个变量叫实例化一个对象
    int age;
    static char* pool; //内存池的起始地址

   static bool initpool()//
    {
        pool=(char*)malloc(18);//向系统申请18字节的内存
        if(pool==0)
            return false;//如果申请失败返回false
        memset(pool,0,18);//pool—指向要填充的内存区域的指针//0—要设置的值//18—要被设置为该值的字节数
        cout<<"first address: "<<(void*)pool<<endl;
            return true;
    }

    static void freepool()
    {
        if(pool==0)
            return;//若内存池为空，直接不用释放返回
        free(pool);//把内存池还给系统
        cout<<"freepool"<<endl;
    }

 player(string pname,int page)
    {
        name=pname;
        age=page;
        cout<<"player"<<endl;

    }
 ~player()
 {
    cout<<"~player"<<endl;
 }

    void* operator new(size_t size)
    {
        if(pool[0]==0)//判断第一个位置是否空闲
        {
            cout<<"use first place:"<<(void*)(pool+1)<<endl;
            pool[0]=1;//把第一个位置标记为已分配
            return pool+1;//返回第一个位置的地址
        }

        if(pool[9]==0)
        {
            cout<<"use second place:"<<(void*)(pool+9)<<endl;
            pool[9]=1;
            return pool+9;
        }

        //如果前两个位置不可用，直接向系统申请内存
        void*ptr=malloc(size);
        cout<<"use adress:"<<ptr<<endl;
        return ptr;
    }

    void operator delete(void*ptr)
    {

        if(ptr==0)
            return;
        if(ptr==pool+1)//如果是第一个位置的地址
        {
            cout<<"delete pool"<<endl;
            pool[0]=0;//把位置标记为空
            return;
        }
        if(ptr==pool+9)
        {
            cout<<"delete pool"<<endl;
            pool[9]=0;
            return;
        }

        //如果地址不属于内存池，把它归还给系统
        free(ptr);
    }
};

char* player::pool=0;

int main()
{
    //初始化内存池
    if(player::initpool()==false)//如果初始化失败
    {
        cout<<"fall to inint pool"<<endl;
        return -1;
    }//返回-1

    player* mai =new player("mai",22);
    cout<<"mai adress:"<<mai<<" name:"<<mai->name<<" age:"<<mai->age<<endl;
    delete mai;

    player::freepool();

    return 0;
}

