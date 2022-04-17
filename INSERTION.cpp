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
    int index,element;
    cout<<"Enter The Index Position Where The Element Is To Be Inserted=";
    cin>>index;
    cout<<"Enter The Element Which Is To Be Inserted=";
    cin>>element;
    for   (int i=size-1;i>=index;i++)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    size++;
    cout<<"The Elements In The Array After Insertion Are=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    return 0;
    getchar();
}
