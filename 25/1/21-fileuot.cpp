#include<fstream>
#include<iostream>

using namespace std;

int main()
{
    //ofstream fout;//创建文件输出流对象//fout为对象名//可以任意取

    //文件名一般用全路径，书写方法如下
    //1: "W:\\Coding\\code_text_output\\1_21.txt"  //转义字符
    //2: R"(W:\Coding\code_text_output\1_21.txt)"  //原始字面量 c++11标准
    //3: "W:/Coding/code_text_output/1_21.txt"     //把斜线反着写
    //4: "Coding/code_text_output/1_21.txt"        //Linux系统写法

    string str="W:\\Coding\\code_text_output\\21.txt";//可以用string
    ofstream fout(str);//可以在创建文件对象时打开文件

    //打开模式
    //ios::out 缺省值；会截断文件内容
    //ios::trunc 截断文件内容
    //ios::app 不截断，只在末尾追加

    //ofstream fout(str,ios::app);//打开模式可以决定是否清空原文件内容


    //fout.open(str);
    //fout.open("W:\\Coding\\code_text_output\\1_21.txt");//打开文件，如果文件不存在，则创建文件；如果存在，则截断其内容//完全覆盖并更新

    //判断文件打开是否成功
    //失败原因：1）目录不存在 2）磁盘空间已满 3）没有权限，Linux平台很常见
    if(fout.is_open()==false)
    {
        cout<<"flie "<<str<<"faled to open"<<endl;
        return 0;
    }



    //向文件中写入文件
    fout<<"akil"<<endl;
    fout<<"mai"<<endl;
    fout<<"yukino"<<endl;

    fout.close();//关闭文件，fout对象失效前会自动调用close()


    return 0;
}
