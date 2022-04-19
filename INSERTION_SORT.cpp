#include<bits/stdc++.h>
using namespace std;
void INSERTION_SORT(int* arr,int size)
{
    for   (int i=1;i<size;i++)
    {
        int key=arr[i];
        int j=i-1;
        while   (j>=0   && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
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
    INSERTION_SORT(arr,size);
    cout<<"The Elements After Sorting In The Array Is As Follows=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    return 0;
    getchar();
}
