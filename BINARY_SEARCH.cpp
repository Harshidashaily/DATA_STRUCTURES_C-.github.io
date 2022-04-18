#include<bits/stdc++.h>
using namespace std;
void BINARY_SEARCH(int* arr,int size)
{
    //IN BINARY SEARCH THE ELEMNETS IN THE ARRAY MUST BE IN THE SORTED ORDER.
    int element;
    cout<<"Enter The Element To Be Searched=";
    cin>>element;
    int start=0,last=size;
    while   (start<=last)
    {
        int middle=(start+last)/2;
        if   (arr[middle]==element)
        {
            cout<<"The Index Position Of The Element Is="<<middle<<endl;
            break;
        }
        else if   (arr[middle]>element)
        {
            last=middle-1;
        }
        else 
        {
            start=middle+1;
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
    sort(arr,arr+size);//IN-BUILT FUNCTION IN C++ FOR SORTING.
    //arr CORRESPONDS TO arr[0];
    //arr+size CORRESPONDS TO arr[0]+size
    //HENCE, THE WHOLE ARRAY BE TAKEN INTO CONSIDERATION
    //SYNTAX=sort(STARTING_INDEX,LAST_INDEX)
    cout<<"The Elements In The Array After Sorting Is=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    BINARY_SEARCH(arr,size);
    return 0;
    getchar();
}
