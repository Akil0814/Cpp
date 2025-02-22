#include <iostream>
#include <fstream>
#include <string>
using  namespace std;

int main()
{
    string filename = R"(W:\Coding\code_text_output\2_21.txt)";

	ifstream fin(filename,ios::in);

	if (fin.is_open() == false) {
		cout << "打开文件" <<filename<< "失败。\n";
        return 0;
	}

	string buffer;
	/*while (fin >> buffer) {
		cout << buffer << endl;
	}*/
	while (true) {
		fin >> buffer;
		cout << "eof()=" << fin.eof() << ",good() = " << fin.good() << ", bad() = " << fin.bad() << ", fail() = " << fin.fail() << endl;
		if (fin.eof() == true)
            break;//读取结束后eof变为true 退出循环

		cout << buffer << endl;
	}

	fin.close();	   // 关闭文件，fin对象失效前会自动调用close()。
}
