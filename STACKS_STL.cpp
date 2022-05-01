//STACKS
#include<bits/stdc++.h>
using namespace std;
int main   ()
{
    stack<int> ABC;
    ABC.push(10);
    ABC.push(12);
    ABC.push(14);
    ABC.push(16);
    ABC.push(18);
    cout<<"The Element At The Top Of The Stack Is="<<ABC.top()<<endl;
    cout<<"The Size Of The Stack Is="<<ABC.size()<<endl;
    if   (ABC.empty()==0)
    {
        cout<<"The Stack Is Not Empty."<<endl;
    }
    else 
    {
        cout<<"The Stack Is Empty."<<endl;
    }
    ABC.pop();
    cout<<"The Element After Popping At The Top Of The Stack Is="<<ABC.top()<<endl;
    cout<<"The Size Of The Stack Is="<<ABC.size()<<endl;
    ABC.pop();
    if   (ABC.empty()==0)
    {
        cout<<"The Stack Is Not Empty."<<endl;
    }
    else 
    {
        cout<<"The Stack Is Empty."<<endl;
    }
    return 0;
    getchar();
}
