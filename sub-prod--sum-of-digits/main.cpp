#include<iostream>
using namespace std;

int main()
{  
  int n,d,prod=1,sum=0,diff;
  cin>>n;
  
  while(n!=0)
  {
      d=n%10;
      sum=sum+d;
      prod=prod*d;
      
      n=n/10;
  }
     int sub=prod-sum;
     cout<<"sub=prod-sum="<<sub;
      
    

   return 0;
}        