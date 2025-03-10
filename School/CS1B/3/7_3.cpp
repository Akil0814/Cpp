//Problem 3: Implement a function to insert a new node at a given position in a doubly linked list.
//Example: Given 1 ↔ 2 ↔ 4 and inserting 3 at position 3, the output should be 1 ↔ 2 ↔ 3 ↔ 4.
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


    return 0;
}
