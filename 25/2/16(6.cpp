#include <iostream>
#include<vector>
#include<algorithm>
using  namespace std;

// void foreach(const vector<int>& v)//只支持vector<int>
// {
//     for(auto iter=v.begin();iter!=v.end();iter++)
//         cout<<"NO:"<<*iter<<endl;
// }

// void foreach(const vector<int>::iterator first,const vector<int>::iterator last)//只支持vector<int>
// {
//     for(auto iter=first;iter!=last;iter++)
//         cout<<"NO:"<<*iter<<endl;
// }

// template<typename T>
// void foreach(const T first,const T last)//支持所有有迭代器的数据类型
// {
//     for(auto iter=first;iter!=last;iter++)
//         cout<<"NO:"<<*iter<<endl;
// }
void AkilShow(const int& num)
{
    cout<<"NO:"<<num<<" akil's"<<endl;
}


template<typename T>
void foreach(const T first,const T last,void(*pfun)(const int&))
{
    for(auto iter=first;iter!=last;iter++)
        pfun(*iter);
        //cout<<"NO:"<<*iter<<endl;
}


int main()
{
    vector<int>num={5,8,2,6,9,3,1,7};

    foreach(num.begin(),num.end(),AkilShow);
}
