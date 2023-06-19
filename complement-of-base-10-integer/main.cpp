#include <iostream>
#include <math.h>
#include <climits>
using namespace std;                       // let n=5, binary of 5 is 101,complement of 101 is 010, so 010 is 2
int main()                                 // print 2;
{   
    int n;
    cin>>n;
    int mask=0, m= ~n;
    if(n==0)
     { cout<<1; exit(0); }
    while(n)
    {
       mask=mask<<1; 
       mask=mask | 1;
       n=n>>1;
    }  
       int ans=mask & m;
       cout<<ans;

    
}
