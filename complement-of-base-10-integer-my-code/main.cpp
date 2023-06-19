#include <iostream>
#include <math.h>

using namespace std;        // if n=5; ans=2
int main()
{
    int n;
    cin>>n;
    int m= ~n;
    int i=0,sum=0;

    while(n)
    {
      int bit=m&1;
      if(bit==1)
     { sum+=pow(2,i); }                  //bit*pow(2,i)==pow(2,i) because bit==1;
      i++;       
      m=m>>1;                              // dont forget this step
      n=n>>1;
      
    }
    cout<<sum;
}

