#include <iostream>
#include <initializer_list>

double sum(std::initializer_list<double> il)
{
    double total = 0;
    for (auto it = il.begin(); it != il.end(); it++)
        total = total + *it;
    return total;
}

int main()
{
    // double total = sum(  3.14, 5.20, 8  );    // 错误，如果没有大括号，这是三个参数。
    double total = sum({ 3.14, 5.20, 8 });        // 正确，有大括号，这是一个参数。
    std::cout << "total=" << total << std::endl;

    return 0;
}
