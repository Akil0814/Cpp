#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1={1,2,3,4,5,6,7,8,9,10};
    vector<int>v2={11,12,13,14,15,16,17,18,19,20};

    //std::vector<int>::iterator
    auto iter=v1.insert(v1.begin()+5,v2.begin()+3,v2.begin()+8);
    cout<<"新插入的第一个元素是："<<*iter<<endl;

    for( auto it=v1.begin();it!=v1.cend();it++)
        cout<<*it<<" ";
    cout<<endl;

    return 0;
}