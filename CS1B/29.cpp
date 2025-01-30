#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    if(n>1)
    {
        int root =ceil(sqrt(n));//round up to nearest holl number

        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

int main()
{
    int input=0;

    cout<<"enter input:";
    cin>>input;

    if(isPrime(input))
        cout<<"is prime number"<<endl;
    else
        cout<<"is not prime";

    return 0;
}