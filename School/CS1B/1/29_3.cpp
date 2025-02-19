#include<iostream>
#include<cstring>
using namespace std;

string reverseString(const string& input)
{
    string output=input;
    for(int i=1;i<=input.length();i++)
    {
        output[i-1]=input[(input.length()-i)];
    }

    return output;
}


int main()
{
    string str={0};
    string rstr={0};

    cout<<"enter a string:";
    cin>>str;

    rstr=reverseString(str);
    cout<<rstr<<endl;

    return 0;
}