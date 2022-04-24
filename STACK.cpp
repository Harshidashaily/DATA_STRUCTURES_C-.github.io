#include<bits/stdc++.h>
using namespace std;
class Stack 
{
    int* arr;
    int top;
    int size;
    public:
    Stack(int size)
    {
        this->size=size;
        int* arr=new int[size];
        top=-1;
    }
    void push(int element)
    {
        if   (size-top>=0)
        {
            top++;
            arr[top]=element;
        }
        else 
        {
            cout<<"Stack OverFlow."<<endl;
        }
    }
    void pop()
    {
        if   (top>=0)
        {
            top--;
        }
        else 
        {
            cout<<"Stack UnderFlow."<<endl;
        }
    }
    int peak()
    {
        if   (top>=0)
        {
            return arr[top];
        }
        else 
        {
            return -1;
        }
    }
    bool isEmpty()
    {
        if   (top==-1)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
int main   ()
{
    Stack ABC(10);
    ABC.push(10);
    ABC.push(9);
    ABC.push(8);
    ABC.push(7);
    ABC.push(6);
    ABC.push(5);
    ABC.push(4);
    ABC.push(3);
    ABC.push(2);
    ABC.push(1);
    cout<<"The TopMost Element Of The Stack Is="<<ABC.peak()<<endl;
    ABC.pop();
    cout<<"After Popping The TopMost Element Of The Stack Is="<<ABC.peak()<<endl;
    return 0;
    getchar();
}
