#include<iostream>
#include <string>
using namespace std;

bool PrimeOrNot(int n)
{   if(n<=1){
    return false;
}
 for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {return false;}
    }
    return true;
}

int main()
{
    int i,n;
    cin>>n;
    string s=PrimeOrNot(n)==1? "Prime":"Not Prime";
    cout<<s;
   
}

