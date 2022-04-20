#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if   (this->next!=NULL)
        {
            this->next=NULL;
            delete next;
        }
        cout<<"The Data In The Deleted Node Is="<<value<<endl;
    }
};
void InsertAtHead(Node* &head,int da)
{
    Node* newNode=new Node(da);
    newNode->next=head;
    head=newNode;
}
void InsertAtTail(Node* &tail,int da)
{
    Node* newNode=new Node(da);
    tail->next=newNode;
    tail=newNode;
}
void InsertAtMiddle(Node* &tail,Node* &head,int position,int da)
{
    if   (position==1)
    {
        InsertAtHead(head,da);
        return;
    }
    Node* temp=head;
    int count=0;
    while   (count<position-1)
    {
        temp=temp->next;
        count++;
    }
    Node* newNode=new Node(da);
    newNode->next=temp->next;
    temp->next=newNode;
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
    Node* previous=NULL;
    Node* current=head;
    int count=0;
    while   (count<position)
    {
        previous=current;
        current=current->next;
        count++;
    }
    previous=current->next;
    current->next=NULL;
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
int main   ()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    InsertAtHead(head,11);
    InsertAtHead(head,12);
    InsertAtMiddle(tail,head,2,13);
    InsertAtTail(tail,14);
    cout<<"The Elements In The Original Singly Linked-List Are=[   ";
    Print(head);
    cout<<"]"<<endl;
    Delete(head,tail,2);
    cout<<"The Elements In The Singly Linked-List After  Deletion Are=[   ";
    Print(head);
    cout<<"]"<<endl;
    return 0;
    getchar();
}
