#include <iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        //loop 1 
       int loop1=i-1;
        while(loop1)
        {
            cout<<" ";
            loop1--;
        }
        //Loop 2 
        int loop2=n-i+1;
        int num=i;
        while(loop2)
        {  
            cout<<num;
            num++;
            loop2--;
            
        }
        cout<<"\n";
        i++;
        
    }
    
}
