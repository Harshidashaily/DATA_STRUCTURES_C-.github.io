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
  cout<<"The Elements In The Array Is As Follows=[   ;
    for   (int i=0;i<size;i++)
    {
      cout<<arr[i]<<"   ";
    }
  cout<<"]"<<endl;
  return 0;
  getchar();
}
