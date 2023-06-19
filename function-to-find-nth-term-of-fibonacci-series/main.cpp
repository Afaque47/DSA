#include <iostream>
#include <math.h>
using namespace std;

 int fib (int n)
   {
    int  a=0;
     int  b=1;
     int  i=3;
     int  sum=0;
      while(i<=n) 
      { int sum=a+b;
        a=b;
        b=sum;
        
        if(i==n)
  
      {  return sum;  }
      i++;
       
      }
      return 0;
   }
    
int main()
{
   int n;
   cin>>n;
  if(n==1)
  {  cout<<0;  exit(0); }
  if(n==2)
  { cout<<1; exit(0); }   

   fib(n);
   cout<<fib(n)  ;
   return 0;
}