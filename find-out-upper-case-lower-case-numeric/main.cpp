#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch<='z'&& ch>='a')
    {
        cout<<"Lower case";
    }
    else if(ch<='Z'&& ch>='A')
    {
        cout<<"Upper Case";
    }
    else if(ch<='9'&&ch>='0'){
        cout<<"Numeric"<<endl;
        
    }
    else
    {
        cout<<"Character of some sort!!!";
    }
}
