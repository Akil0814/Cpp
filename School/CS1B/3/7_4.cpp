//Problem 4: Implement a function to split a circular linked list into two equal halves.
//Example: Given 1 → 2 → 3 → 4 → 5 → 6 (with 6 pointing back to 1), the output should be two lists: 1 → 2 → 3 (with 3 pointing back to 1) and 4 → 5 → 6 (with 6 pointing back to 4).
#include<iostream>
using namespace std;

struct List
{
    int x;
    List* next=nullptr;
};

void get_list(List* &head,List* &tail,const int arr[],int size)
{

    List* tmp=nullptr;
    tmp=new List({arr[0],nullptr});
    head=tail=tmp;
    for(int i=1;i<size;i++)
    {
        tmp=new List({arr[i],nullptr});
        tail->next=tmp;
        tail=tmp;
    }
}

void show_list(List* head)
{
    List* tmp=nullptr;
    tmp=head;
    while(tmp)
    {
        cout<<tmp->x<<" ";
        tmp=tmp->next;
    }

}

void dealt_list(List* &head)
{
    List* nextD=head;
    List* tmp=head;
    while(nextD)
    {
        tmp=nextD;
        nextD=nextD->next;
        delete tmp;
    }
    head = nullptr;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/4;
    List* head=nullptr;
    List* tail=nullptr;

    get_list(head,tail,arr,size);
    show_list(head);
    dealt_list(head);


    return 0;
}
