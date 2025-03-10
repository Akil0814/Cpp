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
    tail->next=head;
}

void show_list(List* head)
{
    List* tmp=nullptr;
    tmp=head;
    while(tmp->next!=head)
    {
        cout<<tmp->x<<" ";
        tmp=tmp->next;
    }
    cout<<tmp->x<<" ";
    cout<<endl;

}

void dealt_list(List* &head)
{
    List* nextD=head;
    List* tmp=head;
    while(nextD->next!=head)
    {
        tmp=nextD;
        nextD=nextD->next;
        delete tmp;
    }
    head = nullptr;
}

void brak_in_two(List* &head,List*&tail,List* &new_head,List*&new_tail)
{
    List* tmp=head;
    int count=1;
    int half=0;
    while(tmp!=tail)
    {
        tmp=tmp->next;
        count++;
    }
    half=count/2;
    tmp=head;

    for(int i=1;i<half;i++)
        tmp=tmp->next;

    new_tail=tmp;
    new_head=tmp->next;
    new_tail->next=head;
    tail->next=new_head;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    List* head=nullptr;
    List* tail=nullptr;

    get_list(head,tail,arr,size);

    List* new_head=nullptr;
    List* new_tail=nullptr;

    show_list(head);

    brak_in_two(head,tail,new_head,new_tail);

    show_list(head);
    show_list(new_head);

    dealt_list(head);
    dealt_list(new_head);

    return 0;
}
