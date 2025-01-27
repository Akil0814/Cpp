#include<fstream>
#include<iostream>

using namespace std;

int main()
{
    string str="W:\\Coding\\code_text_output\\21.txt";//可以用string

    ifstream fin(str);//输入流//不会创建文件//fin为对象名，可以任取
    fin.open(str,ios::in);
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


    //用c风格字符串存放
    char buffer[100];

    while(fin.getline(buffer,100))//getline函数为成员函数，第一个参数为buffer 第二个参数为最多读取内容的字节数
    {
        cout<<buffer<<endl;
    }




    fin.close();

    return 0;
}
