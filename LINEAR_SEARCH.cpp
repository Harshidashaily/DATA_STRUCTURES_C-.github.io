#include<bits/stdc++.h>
using namespace std;
int main   ()
{
    int size;
    cout<<"Enter The Size Of The Array=";
    cin>>size;
    int arr[size];
    cout<<"Enter The Elements In The Array=";
    for   (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int element;
    cout<<"Enter The Element To Search=";
    cin>>element;
    for   (int i=0;i<size;i++)
    {
        if   (arr[i]==element)
        {
            cout<<"The Index Position Of The Element Is="<<i<<endl;
            break;
        }
        else 
        continue;
    }
    return 0;
    getchar();  
}
