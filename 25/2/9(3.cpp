#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};

    auto iter=v.insert(v.begin()+5,13);//在第五个位置插入元素13
    cout<<"新插入的元素是："<<*iter<<endl;

    for(auto it=v.begin();it!=v.cend();it++)
        cout<<*it<<" ";
    cout<<endl;

    return 0;
}