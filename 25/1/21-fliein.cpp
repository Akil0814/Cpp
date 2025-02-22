#include<fstream>
#include<iostream>

using namespace std;

int main()
{
    string str="W:\\Coding\\code_text_output\\1_21.txt";//可以用string

    ifstream fin(str);//输入流//不会创建文件//fin为对象名，可以任取
    //fin.open(str,ios::in);
    //输入模式只有一种
    //ios::in  缺省值
    //ifstream fin(str)；
    //ifstream fin(str，ios::in)；


    //判断文件打开是否成功
    //失败原因：1）目录不存在 2）文件不存在 3）没有权限，Linux平台很常见
    if(fin.is_open()==false)
    {
        cout<<"flie "<<str<<"faled to open"<<endl;
        return 0;
    }

    string buffer;//用于存放从文件中读取的内容

    //读取文件内容
    //文件文本一般以行的方式组织数据

    //getline(fin,buffer);//从文件中读取一行数据放在buffer中

    //1:
    //如果想要读取全部数据 需要while循环
    while(getline(fin,buffer))//把文件内容一行一行读取出来，放在buffer中//文件结束getline返回空
    {
        cout<<buffer<<endl;
    }

    // //2:
    // //存放从文件中读取的内容
    // char buffer[101];
    // while (fin.getline(buffer,100))//要注意保证缓冲区足够大
    // {
    //     cout<<buffer<<endl;
    // }

    string buffer;
    while (fin>>buffer)
    {
        cout<<buffer<<endl;
    }

    fin.close();

    return 0;
}
