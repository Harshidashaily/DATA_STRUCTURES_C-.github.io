#include<bits/stdc++.h>
using namespace std;
int main   ()
{
    string ch1="abcde";
    stack<char> ch2;
    for   (int i=0;i<ch1.length();i++)
    {
        char ch3=ch1[i];
        ch2.push(ch3);
    }
    string ch4="";
    while   (!ch2.empty())
    {
        char top=ch2.top();
        ch4.push_back(top);
    }
    cout<<"The String After Reversal Is="<<ch4<<endl;
    return 0;
    getchar();
}
