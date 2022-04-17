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
    int index;
    cout<<"Enter The Index Position From Where The Element Is To Be Deleted=";
    cin>>index;
    for   (int i=index;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"The Elements In The Array After Deletion Of The Array Is=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    return 0;
    getchar();
}
