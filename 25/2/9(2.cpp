//迭代器
/*
    迭代器是访问容器中元素的通用方法
    如果使用迭代器，不同的容器，访问元素的方法是相同的
    一般情况下 迭代器是指针和移动指针的方法
*/

//正向迭代器
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vv = { 1,2,3,4,5 };//初始化vector容器。
    vector<int> :: iterator it1=vv.begin(); //容器的开始。

    *it1 = 8;//将修改容器中第0元素。
    it1++;//迭代器后移一个元素。
    *it1 = 7;//将修改容器中第1元素。

    //for (vector<int> :: const_iterator it2 = vv.cbegin(); it2 != vv.end(); it2++)
    for (auto it2 = vv.cbegin(); it2 != vv.end(); it2++)//效果一样

        cout << *it2 << " ";

        return 0;
}







