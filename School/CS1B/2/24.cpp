#include<iostream>
#include<vector>
using namespace std;


int func(vector<int>arr)
{
    vector<int>v(10);
    for(int i=0;i<v.size();i++)
    {
        if(arr[i]>v.size())
            v.reserve(arr[i]);

        if(v[arr[i]]==1)
            return arr[i];

        v[arr[i]]=1;
    }

    return -1;
}


int main()
{
    vector<int>arr={3,0,1,5,9,3,8};
        cout<<func(arr);

    return 0;
}
