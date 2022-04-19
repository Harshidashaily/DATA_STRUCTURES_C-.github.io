#include<bits/stdc++.h>
using namespace std;
int partition(int* arr,int start,int end)
{
    int pivot=arr[start];
    int count=0;
    for   (int i=start+1;i<=end;i++)
    {
        if   (arr[i]<pivot)
        {
            count++;
        }
    }
    int pivotArrayIndex=start+count;
    swap(arr[start],arr[pivotArrayIndex]);

    int i=start,j=end;
    while   (i<pivotArrayIndex   &&   pivotArrayIndex<j)
    {
        while   (arr[i]<arr[j])
        {
            i++;
        }
        while   (arr[j]>arr[i])
        {
            j--;
        }
        if   (i<pivotArrayIndex   &&   pivotArrayIndex<j)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotArrayIndex;
}
void QUICK_SORT(int* arr,int start,int end)
{
    if   (start>=end)
    {
        return;
    }
    int p=partition(arr,start,end);
    QUICK_SORT(arr,start,p-1);
    QUICK_SORT(arr,p+1,end);
}
int main   ()
{
    int arr[]={12,11,10,9,8,7,6,5,4,3,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The Elements Before Sorting In The Array Is As Follows=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    QUICK_SORT(arr,0,size-1);
    cout<<"The Elements After Sorting In The Array Is As Follows=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    return 0;
    getchar();
}
