//find missing number

#include<iostream>
using namespace std;

int arr[100]={0};

void sort(int len)
{
    bool didswap=false;
    for(int i=len-1;i>0;i--)
    {
        for(int j =0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didswap=true;
            }
        }
        if(!didswap)
            return;
    }
}

void find(int len)
{
    int find=1;
    int i=0;
    cout<<"missing:";
    while(i<=len)
    {
        if(arr[i]==find)
        {
            find++;
            i++;
        }
        else
        {
            cout<<find<<" ";
            find++;
        }
    }
}


int main()
{
    int input=0;
    cout<<"enter num: ";
    cin>>input;
    cout<<"enter arr: ";

    for(int i=0;i<input;i++)
    {
        cin>>arr[i];
    }

    sort(input-1);

    find(input-1);

    /*for(int i=0;i<input;i++)
    {
        cout<<arr[i]<<endl;
    }*/

    return 0;
}
