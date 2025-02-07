//string容器
#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout<<"npos="<<string::npos<<endl;//显示npos的值

    //1 string():创建一个长度为0的string对象（默认构造函数）
    string s1;  //创建一个长度为0的string对象
    cout<<"s1="<<s1<<endl;//将输出一个空行
    cout<<"s1.capacity()="<<s1.capacity()<<endl;//返回当前容量，如果不重新分配内存，可以存放字符的总数
    cout<<"s1.size()="<<s1.size()<<endl;//返回当前容器中数据的大小
    cout<<"容器动态数组的首地址="<<(void*)s1.c_str()<<endl;

    s1="xxxxxxxxxxxxxxxx";//16字节的内容//容器会进行一次扩容
    cout<<"s1.capacity()="<<s1.capacity()<<endl;//返回当前容量，如果不重新分配内存，可以存放字符的总数
    cout<<"s1.size()="<<s1.size()<<endl;//返回当前容器中数据的大小
    cout<<"容器动态数组的首地址="<<(void*)s1.c_str()<<endl;//地址不一样

//-----------------------------------------------------------------------------------------------------------

    //2 string(const char* s):将string对象初始化为s指向的NBTS（转换函数）
    string s2("hellow world");
    cout<<"s2="<<s2<<endl;  //将输出s2=hellow world
    string s3="hellow world";
    cout<<"s3="<<s3<<endl;  //将输出s3=hellow world

//-----------------------------------------------------------------------------------------------------------


    //3 string(const string& str):将string对象初始化为str （拷贝构造函数）//深拷贝
    string s4(s3);
    cout<<"s4="<<s4<<endl;

    string s5=s3;
    cout<<"s5="<<s5<<endl;

//-----------------------------------------------------------------------------------------------------------


    //4 string(const char* s,size_t n):将string对象初始化为s指向的NBTS的前n个字符
    //即使超过了NBTS结尾

    string s6("hellow world",5);
    cout<<"s6="<<s6<<endl;  //将输出s6=hellow
    cout<<"s6.capacity()="<<s6.capacity()<<endl;//返回当前容量，如果不重新分配内存，可以存放字符的总数
    cout<<"s6.size()="<<s6.size()<<endl;//返回当前容器中数据的大小

    string s7("hellow world",50);
    cout<<"s7="<<s7<<endl;  //将输出s7=hellow乱码
    cout<<"s7.capacity()="<<s7.capacity()<<endl;//返回当前容量，如果不重新分配内存，可以存放字符的总数
    cout<<"s7.size()="<<s7.size()<<endl;//返回当前容器中数据的大小

//-----------------------------------------------------------------------------------------------------------


    //5 string(cosnt string& str,size_t pos=0 ,size_t n=npos)

    //6 template<class T> string(T begin,T end):将string对象初始化为区间[begin,end)内的字符，
    //其中begin和end的行为就像指针，用于指定位置 范围包括begin在内 但不包括end

    //7 string(size_t n,char c): 创建一个由n个字符c组成的string对象

    return 0;
}