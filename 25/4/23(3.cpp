//leetcode 9
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isPalindrome_1(int x)
    {
        if(x<0)
            return false;

        int tmp=0;
        for (int i = x; i > 0; i = i / 10)
        {
            tmp=i%10;
            num.push_back(tmp);
        }
        for(int i=0,j=num.size()-1;i<num.size()/2;i++,j--)
        {
            if(num[i]!=num[j])
                return false;
        }
        return true;
    }

    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))//如果小于0或者末尾是0 直接返回false
            return false;

        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        /*
        if x=1221
        轮数	x	    reversed	解释
        初始	1221	 0	        开始
        1	   122	    1	        把 1 弹出，加到 reversed 中
        2	   12	    12	        再弹出 2，reversed=12
        结束	12	     12	         x == reversed，满足 ✅
        */

        return x == reversed || x == reversed / 10;
        //偶数位数字：如 1221，x 和 reversed 应该完全相等
        //奇数位数字：如 12321，中间那个 3 可以忽略 → 比较 12 == 123/10（也是 12）
    }
private:
    vector<int>num;
};




int main()
{
    Solution s;
    int x=0;
    cin>>x;
    cout<<s.isPalindrome(x)<<endl;

    return 0;
}
