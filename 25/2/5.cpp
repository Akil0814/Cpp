#include<iostream>
using namespace std;

#define NUM 14
#define NAME "akil"

int main()
{
    cout << "name=" << NAME << "num=" << NUM << endl;

    cout << "当前源代码文件名:__FILE__=" << __FILE__ << endl;
    cout << "当前源代码函数名:__FUNCTION__=" << __FUNCTION__ << endl;
    cout << "当前源代码行号:__LINE__=" << __LINE__<< endl;
    cout << "编译日期:__DATE__=" << __DATE__ << endl;
    cout << "编译时间:__TIME__=" << __TIME__ << endl;
    cout << "当前系统时间戳:__TIMESTAMP__=" << __TIMESTAMP__ << endl;
    cout << "当使用C++编译程序时 标识符__cplusplus就会被定义=" << __cplusplus << endl;

    return 0;
}