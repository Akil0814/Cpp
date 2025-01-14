//AKELI ADILIJIANG      CS1A             Chapter 9, P.537 , #3
//
/**************************************************************
 * STORE TEST SCORES--DROP LOWEST
 * ____________________________________________________________
 * This array should be passed to a function that sorts them in
 * ascending order. Another function should be called that calculates
 *  the average score. The program should display the sorted list
 * of scores and averages with appropriate headings. Use pointer
 * notation rather than array notation whenever possible.
 *____________________________________________________________
 * INPUT
 *  number of score
 *  every score
 * OUTPUT
 *  score after sorte
 *  averagee of array
 *************************************************************/
#include <iostream>
using namespace std;

void InterScore(int* p,int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<"Enter score "<<i+1<<" :";
        cin>>*(p+i);
    }
}

void Sorte(int* p,int x)
{
    for(int i=x;i>0;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            if(*(p+j) > *(p+j+1))
            {
                swap( *(p+j),*(p+j+1));
            }
        }
    }
}

double GetAverages(int* p,int x)
{
    int total=0;
    for(int i=1;i<x;i++)
    {
        total=total+ *(p+i);
    }
    x=x-1;

    return total/x;
}

void DeleteArr(int* p)
{
    if(p!=nullptr)
    {
       delete[] p;
       p = nullptr;
    }
}

void ShowArr(int* p,int x)
{
    for(int i=0;i<x;i++)
        cout<<*(p+i)<<" ";
        cout<<endl;
}

void DropLowest(int* p,int x)
{
    int lowest=*p;
    int num=0;
    for(int i=0;i<x;i++)
    {
        if(lowest>*(p+i))
        {
            lowest=*(p+i);
            num=i;
        }
    }
    cout<<"Drop Lowest Score:"<<lowest<<endl;
    *(p+num)=0;
}


int main()
{
    int  scoreNum=0;
    double average=0;
    cout<<"Enter number of scores:";
    cin>>scoreNum;
    int* arr=new int[scoreNum];


    InterScore(arr,scoreNum);
    ShowArr(arr,scoreNum);

    Sorte(arr,scoreNum);
    ShowArr(arr,scoreNum);

    DropLowest(arr,scoreNum);
    average=GetAverages(arr,scoreNum);
    cout<<"average= "<<average<<endl;

    DeleteArr(arr);

    return 0;
}



