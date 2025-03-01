#include<iostream>
#include<string.h>
#include<vector>
#include <unordered_set>
using namespace std;


void reverseString(char* str)
{
    int strSize=strlen(str);
    char tmp;
    for(int i=0,j=strSize-1;i<strSize/2;i++,j--)
    {
        tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;
    }

}


int main()
{
    char str[] = "hello";
    cin>>str;

    reverseString(str);

    for(int i=0;i<strlen(str);i++)
    {
        cout<<str[i];
    }

}
