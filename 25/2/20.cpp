//二进制文件
#include <iostream>
#include <fstream>  // ofstream类需要包含的头文件。
using  namespace std;

int main()
{
	// 文件名一般用全路径，书写的方法如下：
    //1: "W:\\Coding\\code_text_output\\2_20.dat"  //转义字符
    //2: R"(W:\Coding\code_text_output\2_20.dat)"  //原始字面量 c++11标准
    //3: "W:/Coding/code_text_output/2_20.dat"     //把斜线反着写
    //4: "Coding/code_text_output/2_20.dat"        //Linux系统写法
	string filename = R"(W:\Coding\code_text_output\2_20.dat)";
	//char    filename[] = R"(D:\data\bin\test.dat)";

	// 创建文件输出流对象，打开文件，如果文件不存在，则创建它。
	// ios::out     		缺省值：会截断文件内容。
	// ios::trunc  		截断文件内容。（truncate）
	// ios::app   			不截断文件内容，只在文件未尾追加文件。（append）
	// ios::binary   		以二进制方式打开文件。
	//ofstream fout(filename, ios::binary);
	//ofstream fout(filename, ios::out | ios::binary);
	//ofstream fout(filename, ios::trunc | ios::binary);
	//ofstream fout(filename, ios::app | ios::binary);

	ofstream fout;
	fout.open(filename, ios::app | ios::binary);//以二进制的方式打开文件 并且把写入的数据追加到文件末尾

	// 判断打开文件是否成功。
	// 失败的原因主要有：1）目录不存在；2）磁盘空间已满；3）没有权限，Linux平台下很常见。
	if (fout.is_open() == false)
	{
		cout << "打开文件" << filename << "失败。\n";  return 0;
	}

	// 向文件中写入数据。
	struct p {               // 结构体。
		char name[31];         // 姓名。
		int    age;
		char memo[301];      // 备注。
		double weight;         // 体重。
	}girl;
	girl={ "akil",20,"akil adil" ,59.8};
	fout.write((const char *)& girl, sizeof(p));   // 写入第一块数据。
	girl={ "mai",21,"sakurajia mai",55.2};
	fout.write((const char*)& girl, sizeof(p));     // 写入第二块数据。

	fout.close();	   // 关闭文件，fout对象失效前会自动调用close()。

	cout << "操作文件完成。\n";

    return 0;
}
