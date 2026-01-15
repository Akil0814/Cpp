/*Container With Most Water:
Given n non-negative integers a1, a2, ..., an, where each
represents a point at coordinate (i, ai). n vertical lines
are drawn such that the two endpoints of the line i
are (i, ai) and (i, 0). Find two lines, which together with
the x-axis form a container, such that the container contains the most water.
*/
#include<iostream>
#include<vector>
using namespace std;


vector<int> func(vector<int>& v)
{
    vector<int>re={-1,-1};
    int water=0;
    int maxWater=0;
    for(int i=0;i<(v.size()-1);i++)
    {
        if(v[i]>v[i+1])
            water=v[i+1];
        else
            water=v[i];

        if(water>maxWater)
        {
            maxWater=water;
            re[0]=v[i];
            re[1]=v[i+1];
        }

    }
    return re;
}



int main()
{
    vector<int> arr={3,5,2,9,1,3};

    vector<int> water=func(arr);

    for(int i=0;i<water.size();i++)
    {
        cout<<water[i]<<" ";
    }



    return 0;
}
