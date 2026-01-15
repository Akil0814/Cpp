//Problem 2: Write a function to rotate a singly linked list to the right by k places.
//Example: Given 1 → 2 → 3 → 4 → 5 and k = 2, the output should be 4 → 5 → 1 → 2 → 3.
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
    cout<<endl;

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

void rotate_list(List* &head,List* &tail,int x)
{
    List* tmp=head;
    int count=1;

    while(tmp->next)
    {
        tmp=tmp->next;
        count++;
    }

    tmp=head;
    tail->next=head;

    x = x % count;
    for(int i=0;i<count-x-1;i++)
    {
        tmp=tmp->next;
    }
    tail=tmp;
    head=tail->next;
    tail->next=nullptr;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/4;
    List* head=nullptr;
    List* tail=nullptr;

    get_list(head,tail,arr,size);
    show_list(head);
    rotate_list(head,tail,2);
    show_list(head);
    dealt_list(head);


    return 0;
}
