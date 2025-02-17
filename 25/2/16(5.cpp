#include <array>
#include <iostream>
using namespace std;


//void func(const array < array<int, 5>, 10 >& arr)//可以这么写
//{
//	for (int ii = 0; ii < arr.size(); ii++)
//	{
//		for (int jj = 0; jj < arr[ii].size(); jj++)
//			cout << arr[ii][jj] << " ";
//		cout << endl;
//	}
//}

template <typename T>//使用模板类
void func(const T& arr)
{
	for (int ii = 0; ii < arr.size(); ii++)
	{
		for (int jj = 0; jj < arr[ii].size(); jj++)
			cout << arr[ii][jj] << " ";
		cout << endl;
	}
}


int main()
{
    array<array<int, 5>, 10> bb; // 二维数组，相当于int bb[10][5]。

    for (int ii = 0; ii < bb.size(); ii++) // 对二维数组赋值。
    {
        for (int jj = 0; jj < bb[ii].size(); jj++)
            bb[ii][jj] = jj * 10 + ii;
    }

    func(bb); // 把二维数组传给函数。

    return 0;
}
