#include<bits/stdc++.h>
using namespace std;
void SELECTION_SORT(int* arr,int size)
{
    for   (int i=0;i<size-1;i++)
    {
        for   (int j=i+1;j<size;j++)
        {
            if   (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
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
    SELECTION_SORT(arr,size);
    cout<<"The Elements After Sorting In The Array Is As Follows=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    return 0;
    getchar();
}
