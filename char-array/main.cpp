#include<bits/stdc++.h>
using namespace std;
void reverse(char ch[],int l)             // reverse a string
{
    int s=0,e=l-1;
    while(s<=e)
   { swap(ch[s++],ch[e--]); }
}

int getlength(char ch[])                   // find length of string
{
    int count=0;
    for(int i=0;ch[i]!='\0';i++)
    { count++; }
    return count;
}

int main()
{
    char ch[20];
    cout<<"Enter name:";
    cin>>ch;
   // ch[3]='\0';                // null char ke add hote hi aage ka execution stops
    cout<<"your name: "<<ch;
    cout<<endl;
    auto l=getlength(ch);       
    cout<<"length : "<<l<<endl;
    
    reverse(ch,l);
    cout<<"reverse: "<<ch<<endl;
    return 0;
}
