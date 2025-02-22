#include <iostream>
#include <fstream>  // ifstream类需要包含的头文件。
using  namespace std;

int main()
{

	string filename = R"(W:\Coding\code_text_output\2_20.dat)";


	ifstream fin;
	fin.open(filename, ios::in | ios::binary);

	if (fin.is_open() == false)
	{
		cout << "打开文件" << filename << "失败。\n";  return 0;
	}

	// 二进制文件以数据块（数据类型）的形式组织数据。
	struct st_p
    {
		char name[31];
		int    age;
		char memo[301];
		double weight;
	}girl;
    
	while (fin.read((char*)&girl, sizeof(girl)))
	{
		cout << " name=" << girl.name << " age=" << girl.age <<
			" memo=" << girl.memo << " weight=" << girl.weight << endl;
	}

	fin.close();	   // 关闭文件，fin对象失效前会自动调用close()。

	cout << "操作文件完成。\n";

    return 0;
}
