//Problem 1: Write a function to remove duplicate nodes from a sorted singly linked list.
//Example: Given 1 → 1 → 2 → 3 → 3, the output should be 1 → 2 → 3.
#include<iostream>
using namespace std;

struct List
{
    int x;
    List* previous=nullptr;
    List* next=nullptr;
};

void get_list(List* &head,List* &tail,const int arr[],int size)
{

    List* tmp=nullptr;
    List* last_tmp=nullptr;

    tmp=new List({arr[0],nullptr,nullptr});
    head=tail=tmp;
    for(int i=1;i<size;i++)
    {
        last_tmp=tmp;
        tmp=new List({arr[i],last_tmp,nullptr});
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


void cheek_list(List* &head,List* &tail)
{
    List* slow=head;
    List* fast=head->next;

    while(slow->next)
    {


    }


}

int main()
{
    int arr[]={3,2,1,5,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    List* head=nullptr;
    List* tail=nullptr;

    get_list(head,tail,arr,size);
    show_list(head);
    sort_list(head,tail,size);
    show_list(head);
    dealt_list(head);


    return 0;
}
