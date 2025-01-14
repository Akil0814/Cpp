#include <iostream>

int main()
{
    int n = 5;
    int x = 5;

    int* arr = new int[n][x];  // 动态分配一个大小为n的数组

    for(int i = 0; i < n; ++i) {
        arr[i] = i * 2;  // 初始化数组
    }

    for(int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";  // 输出: 0 2 4 6 8
    }

    delete[] arr;  // 释放动态分配的内存
    return 0;
}