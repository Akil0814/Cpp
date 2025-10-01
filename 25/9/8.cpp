// leetcode 88
#include<iostream>
#include<unordered_map>
#include <string>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n,bool my)
{
    nums1.shrink_to_fit(m);
    nums2.shrink_to_fit(n);

    for(int i=0,j=0;nums1[i]<nums1.size()-1||nums2[j]<nums1.size()-1;)
    {
        if(nums1[i]<nums2[j])
        {

            i++;
        }
        else
        {

            j++;
        }
    }
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int i = m - 1;       // nums1 最后一个有效位置
    int j = n - 1;       // nums2 最后一个
    int k = m + n - 1;   // nums1 最后总位置

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // 如果 nums2 还有剩余，搬过去
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main()
{

    return 0;
}
