#include<bits/stdc++.h>
using namespace std;
//QUEUE WORKS ON THE FIFO STRUCTURE WHICH MEANS FIRST IN AND FIRST OUT.
int main   ()
{
    queue<int> ABC;
    ABC.push(10);//TEH INSERTION OF THE ELEMENTS WHICH MEANS THE PUSHING OF THE ELEMENTS IS AT THE REAR.
    ABC.push(12);//THE POPPING OF THE ELEMENTS WHICH MEANS AT THE FRONT.
    ABC.push(14);
    ABC.push(16);
    ABC.push(18);
    cout<<"The Element At The Front Of The Queue Is="<<ABC.front()<<endl;
    cout<<"The Size Of The Queue Is="<<ABC.size()<<endl;
    if   (ABC.empty()==0)
    {
        cout<<"The Queue Is Not Empty."<<endl;
    }
    else 
    {
        cout<<"The Queue Is Empty."<<endl;
    }
    ABC.pop();
    cout<<"The Element At The Front Of The Queue After Popping Is="<<ABC.front()<<endl;
    cout<<"The Size Of The Queue After Popping The Element Is="<<ABC.size()<<endl;
    if   (ABC.empty()==0)
    {
        cout<<"The Queue Is Not Empty."<<endl;
    }
    else 
    {
        cout<<"The Queue Is Empty."<<endl;
    }
    return 0;
    getchar();
}
