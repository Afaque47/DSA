#include <iostream>
#include <math.h>
using namespace std;

  int setbit (int n)
  {    
      int count=0;
      while(n)
      {
    bool  bit=n&1;
      if(bit==1)
      {
          count++;
      }
        n=n>>1;
      }
      return count;
  }


int main()
{
   int a,b;
   cin>>a>>b;
   a= setbit(a);
   b= setbit(b);
   cout<<a+b;

    return 0;
}