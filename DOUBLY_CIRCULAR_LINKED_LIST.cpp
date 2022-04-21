//DOUBLY CIRCULAR LINKED-LIST 
#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int data;
    Node* previous;
    Node* next;
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
        cout<<"The Data In The Deleted Node Is="<<value;
    }
};
void Insert(Node* &tail,int position,int da)
{
    if   (tail==NULL)
    {
        Node* newNode=new Node(da);
        newNode->previous=newNode;
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
        temp->next->previous=newNode;
        newNode->previous=temp;
        temp->next=newNode;
}
void Delete(Node* &tail,int position)
{
    if   (tail==NULL)
    {
        return;
    }
    Node* previous1=tail;
    Node* current=previous1->next;
    int count=0;
    while   (count<position)
    {
        previous1=current;
        current=current->next;
        count++;
    }
    previous1->next=current->next;
    current->next->previous=previous1;
    current->next=NULL;
    current->previous=NULL;
    delete current;
}
void Print(Node* &tail)
{
    Node* temp=tail;
    do 
    {
        cout<<tail->data<<"   ";
        tail=tail->next;
    }
    while   (tail->next!=temp);
}
int main   ()
{
    Node* node1=new Node(10);
    Node* tail=node1;
    Insert(tail,1,12);
    Insert(tail,2,13);
    Insert(tail,3,14);
    Insert(tail,4,15);
    cout<<"The Elements In The Doubly Circular Linked-List Are=[   ";
    Print(tail);
    cout<<"]"<<endl;
    Delete (tail,3);
    cout<<"The Elements In The Dobly Circular Linked-List After Deleting The Elements Are=[   ";
    Print(tail);
    cout<<"]"<<endl;
    return 0;
    getchar();
}
