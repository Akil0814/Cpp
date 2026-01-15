//AKELI ADILIJIANG      CS1A             Chapter 9, P.537 , #4
/**************************************************************
 * STORE TEST SCORES AND NAME
 * ____________________________________________________________
 * This array should be passed to a function that sorts them in
 * ascending order. Another function should be called that calculates
 *  the average score. The program should display the sorted list
 * of scores and averages with appropriate headings. Use pointer
 * notation rather than array notation whenever possible.
 *____________________________________________________________
 * INPUT
 *  number of score
 *  name of each student
 *  every score
 * OUTPUT
 *  score after sorte
 *  name of each student
 *  averagee of array
 *************************************************************/
#include <iostream>
using namespace std;

void InterScore(int* p,string* pn,int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<"Enter name "<<i+1<<" :";
        cin>>*(pn+i);
        cout<<"Enter score "<<i+1<<" :";
        cin>>*(p+i);
    }
}

void Sorte(int* p,string* pn,int x)
{
    for(int i=x;i>0;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            if(*(p+j) > *(p+j+1))
            {
                swap( *(p+j),*(p+j+1));
                swap( *(pn+j),*(pn+j+1));
            }
        }
    }
    cout<<"Sorted:"<<endl;
}

void DeleteArr(int* p,string* pn)
{
    if(p!=nullptr)
    {
       delete[] p;
       delete[] pn;

       p = nullptr;
    }
}

void ShowArr(int* p,string* pn,int x)
{
    for(int i=0;i<x;i++)
        cout<<*(pn+i)<<" "<<*(p+i)<<" "<<endl;
}

int main()
{
    int  scoreNum=0;
    double average=0;
    cout<<"Enter number of people:";
    cin>>scoreNum;
    int* arr=new int[scoreNum];
    string* arrn=new string[scoreNum];



    InterScore(arr,arrn,scoreNum);
    ShowArr(arr,arrn,scoreNum);

    Sorte(arr,arrn,scoreNum);
    ShowArr(arr,arrn,scoreNum);

    DeleteArr(arr,arrn);

    return 0;
}

