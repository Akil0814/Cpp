//leetcode 20
#include<iostream>
#include<vector>
using namespace std;


bool is_pair(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool isValid(const string& s)
{
    vector<char> st;
    st.reserve(s.size());//提前预留字符串size大小

    for (char c : s)
    {
        switch (c)
        {
        case '(': case '[': case '{':
            st.push_back(c);
            break;
        case ')': case ']': case '}':
            if (st.empty() || !is_pair(st.back(), c))
                return false;
            st.pop_back();
            break;
        default:
            return false;
        }
    }
    return st.empty();
}

int main()
{
    string str="[[{]]{}}";
    std::cout<<isValid(str);

    return 0;
}
