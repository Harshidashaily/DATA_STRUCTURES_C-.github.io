#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int data;
    Node* next;
    Node* previous;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->previous=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if   (this->next!=NULL)
        {
            this->next=NULL;
            this->previous=NULL;
            delete next;
            delete previous;
        }
        cout<<"The Data Of The Deleted Node Is="<<value<<endl;
    }
};
void InsertAtHead(Node* &head,int da)
{
     Node* newNode=new Node(da);
     newNode->next=head;
     head->previous=newNode;
     head=newNode;
}
void InsertAtTail(Node* &tail,int da)
{
    Node* newNode=new Node(da);
    tail->next=newNode;
    newNode->previous=tail;
    tail=tail->next;
}
void InsertAtMiddle(Node* &tail,Node* &head,int position,int da)
{
    if   (position==1)
    {
        InsertAtHead(head,da);
        return;
    }
    else 
    {
        Node* temp=head;
        int count=0;
        while   (count<position-1)
        {
            temp=temp->next;
            count++;
        }
        Node* newNode=new Node(da);
        newNode->next=temp->next;
        temp->next->previous=newNode;
        newNode->previous=temp;
        temp->next=newNode;
    }
}
void Delete(Node* &head,Node* &tail,int position)
{
    if   (position==1)
    {
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    Node* previous1=NULL;
    Node* current=head;
    int count=0;
    while   (count<position)
    {
        previous1=current->next;
        current=current->next;
        count++;
    }
    previous1->next=current->next;
    current->next->previous=previous1;
    current->next=NULL;
    current->previous=NULL;
    delete current;
}
void Print(Node* &head)
{
    Node* temp=head;
    if   (temp==NULL)
    {
        return;
    }
    else 
    {
        while   (temp!=NULL)
        {
            cout<<temp->data<<"   ";
            temp=temp->next;
        }
    }
}
void PrintReverse(Node* &tail)
{
    Node* temp=tail;
    if   (temp==NULL)
    {
        return;
    }
    else 
    {
        while   (temp!=NULL)
        {
            cout<<temp->data<<"   ";
            temp=temp->previous;
        }
    }
}
int main   ()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    InsertAtHead(head,11);
    InsertAtHead(head,12);
    InsertAtTail(tail,14);
    InsertAtMiddle(tail,head,3,13);
    cout<<"The Elements In The Original Linked-List Are=[   ";
    Print(head);
    cout<<"]"<<endl;
    cout<<"The Elements In The Reversed Original Linked-List Are=[   ";
    PrintReverse(tail);
    cout<<"]"<<endl;
    Delete(head,tail,3);
    cout<<"The Elements After Deletion In The Original Linked-List Are=[   ";
    Print(head);
    cout<<"]"<<endl;
    cout<<"The Elements After Deletion In The Reversed Original Linked-List Are=[   ";
    PrintReverse(tail);
    cout<<"]"<<endl;
    return 0;
    getchar();
}
