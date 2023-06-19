#include <iostream>
#include <math.h>
using namespace std;

int tatti (int n)
{    
   int fact=1;
     while(n)
      {  
         fact=fact*n;
         n--;
      }
     return fact;
    
}

int main()
{
   int n,r;
   cin>>n>>r;
     
    
  /*  int  f1 = tatti(n);
      int  f2 = tatti(r);
      int  f3 = tatti(n-r);  */
       
      int ncr=tatti(n)/(tatti(r)* tatti(n-r));
      cout<<ncr;
}
