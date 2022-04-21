//SINGLY-CIRCULAR LINKED-LIST
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
        cout<<"The Data In the Deleted Node="<<value;
    }
};
void Insert(Node* &tail,int position,int da)
{
    if   (tail==NULL)
    {
        Node* newNode=new Node(da);
        newNode->next=newNode;
    }
    Node* temp=tail;
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
void Delete(Node* &tail,int position)
{
    if   (tail==NULL)
    {
        return;
    }
    else 
    {
        Node* previous=tail;
        Node* current=previous->next;
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
}
void Print(Node* &tail)
{
    Node* temp=tail;
    do 
    {
        cout<<tail->data<<"   ";
        tail=tail->next;
    }while   (tail->next!=temp);
}
int main   ()
{
    Node* node1=new Node(10);
    Node* tail=node1;
    Insert(tail,1,9);
    Insert(tail,2,19);
    Insert(tail,3,20);
    cout<<"The Elements In The Singly Circular Linked-List Are=[   ";
    Print(tail);
    cout<<"]"<<endl;
    Delete(tail,1);
    cout<<"The Elements In The Singly Circular Linked-List After Deletion Of The Element=[   ";
    Print(tail);
    cout<<"]"<<endl;
    return 0;
    getchar();
}
