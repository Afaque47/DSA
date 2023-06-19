#include <iostream>
using namespace std;                                           // time complexity O(log n)

int modularExponentiation(int a,int n,int m){                             //10000000 2  10000001
    int res=1;                                                            //10000000 10 10000005 
    while(n){                                                            
      
    if(n&1){ 
        res=( (1LL)*(res)*(a) ) % m;             
          
      }
       
        a=((1LL)*(a)*(a) ) % m;
        n=n>>1;
    }
    return res;
    
    
    
}
int main()
{
    int a=10000000;
    int n=10;
    int m=10000005;
    
   cout<<modularExponentiation(a,n,m);

    return 0;
}
