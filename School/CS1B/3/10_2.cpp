//Problem 1: Write a function to remove duplicate nodes from a sorted singly linked list.
//Example: Given 1 → 1 → 2 → 3 → 3, the output should be 1 → 2 → 3.
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

bool cheek_list(List* &head)
{
    if(head==nullptr||head->next==nullptr)
        return false;

    List* slow=head;
    List* fast=head->next;

    while(slow!=fast)
    {
        if(fast==nullptr||fast->next==nullptr)
            return false;
        slow=slow->next;
        fast=fast->next->next;
    }

    return true;
}


int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/4;
    List* head=nullptr;
    List* tail=nullptr;

    get_list(head,tail,arr,size);
    show_list(head);
    head->next->next->next->next=head->next;
    cout<<cheek_list(head)<<endl;
    //show_list(head);
    //dealt_list(head);


    return 0;
}
