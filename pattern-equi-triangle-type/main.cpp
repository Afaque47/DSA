#include <iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        //loop 1 
       int loop1=n-i;
        while(loop1)
        {
            cout<<" ";
            loop1--;
        }
        //Loop 2 
        int loop2=i;
        int num=1;
        while(loop2)
        {  
            cout<<num;
            loop2--;
            num++;
        }
       // loop 3
     int  loop3=i-1;
        int k=i-1;
        while(loop3)
        {  
            cout<<k;
             k--;
            loop3--;
           
        }
       
       cout<<"\n";
        i++;
        
    }
    
}

