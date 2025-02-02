#include <iostream>
using namespace std;

int Digit(int number, int n)
{
    int arr[23];

    int tmp=0;
    int index=0;
    int i=0;

    while(number>0)
    {
        tmp=number%10;
        arr[i]=tmp;
        number=number/10;
        i++;
    }

    if(i<n)
        return -1;
    else
    {
        index=i-n;

        return arr[index];
    }


}

int main()
{
    int x=0;
    int index=0;

    cout<<"Enter a number:";
    cin>>x;
    cout<<"Enter the digit you looking for:";
    cin>>index;

    cout<<Digit(x,index);

    return 0;
}