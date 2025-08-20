// KMP实现
#include <string>
#include <vector>
using namespace std;

static vector<int> build_lps(const string &p)
{
    int m = (int)p.size();
    vector<int> lps(m, 0);
    for (int i = 1, len = 0; i < m;)
    {
        if (p[i] == p[len])
        {
            lps[i++] = ++len;
        }
        else if (len > 0)
        {
            len = lps[len - 1];
        }
        else
        {
            lps[i++] = 0;
        }
    }
    return lps;
}

int strStr(const string &haystack, const string &needle)
{
    if (needle.empty())
        return 0;
    if (haystack.size() < needle.size())
        return -1;

    auto lps = build_lps(needle);
    for (int i = 0, j = 0; i < (int)haystack.size();)
    {
        if (haystack[i] == needle[j])
        {
            i++;
            j++;
            if (j == (int)needle.size())
                return i - j; // 命中
        }
        else if (j > 0)
        {
            j = lps[j - 1];
        }
        else
        {
            i++;
        }
    }
    return -1;
}

int main()
{

    return 0;
}
