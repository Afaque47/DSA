#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int sum=0;
    int i=0;
    while(n)
    {
      int bit=(n&1);
    
      sum=sum+(bit* pow(10,i));
      i++;
      n=n>>1;
    
        
    }
    
     cout<<sum;
     

    return 0;
}
