#include<iostream>
#include<vector>
#include <algorithm>
int main()
{
    std::vector<int> arr={1,3,6,8,3,10,3};


    std::sort(arr.begin(),arr.end());

    for(auto iter:arr)
    {
        std::cout<<iter<<" ";
    }

    return 0;
}
