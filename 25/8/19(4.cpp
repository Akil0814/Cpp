//leetcode 27
#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val)
{
    if (nums.empty()) return 0;

    int slow=0;

    for(int fast = 0; fast < nums.size(); fast++)
    {
        if(nums[fast]!=val)
        {
            nums[slow] = nums[fast];
            slow++;
        }
    }

    return slow;
}


int main()
{

}
