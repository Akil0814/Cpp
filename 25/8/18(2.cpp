//leetcode 14
#include<iostream>
#include<vector>

#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs,bool my)
{
    if (strs.empty()) return "";

    size_t min_len = strs[0].size();

    for(auto &iter :strs)
    {
        if (iter.size() < min_len)
            min_len = iter.size();

    }

    string res;

    for (size_t i = 0; i < min_len; ++i)
    {
        char first=strs[0][i];

        for(auto iter= strs.begin()+1;iter!=strs.end();iter++)
        {
            if((*iter)[i] != first)
                return res;
        }
        res.push_back(first);
    }
    return res;
}


string longestCommonPrefix_sort(vector<string> strs)
{
    if (strs.empty()) return "";

    // 先排个序
    sort(strs.begin(), strs.end());

    // 拿第一个和最后一个
    const string& a = strs.front();
    const string& b = strs.back();

    // 两个字符串逐字符比较
    size_t i = 0, n = min(a.size(), b.size());
    while (i < n && a[i] == b[i]) ++i;

    // 返回匹配的前缀
    return a.substr(0, i);
}


string longestCommonPrefix(const vector<string>& strs) {
    if (strs.empty()) return "";
    const string& base = strs[0];
    size_t m = base.size();

    for (size_t i = 0; i < m; ++i) {
        char c = base[i];
        // 从第二个字符串开始比
        for (size_t k = 1; k < strs.size(); ++k) {
            if (i == strs[k].size() || strs[k][i] != c) {
                return base.substr(0, i);
            }
        }
    }
    return base; // 全部匹配
}

int main()
{
    vector<string> strs={"flower","flow","flight"};
    std::cout<<longestCommonPrefix_sort(strs);
}
