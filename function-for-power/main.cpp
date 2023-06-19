#include <iostream>
#include<math.h>
using namespace std;

int power(int a, int b)
  {
      int  sum=1;
   
   for(int i=1;i<=b;i++)
   {
     sum=sum*a;  
   }
   return sum;
 
  }
  
  
   int main()
{ 
    int p,q;
    cin>>p>>q;
 int ans=  power(p,q);
  cout<<ans;
  
  return 0;
}

