#include <iostream>
using namespace std;

int main()
{
    int n,sum=1;
    cin>>n;
    
    for(int i = 0;i<=n/2;i++)
    {
      sum=sum*2;
      if(sum==n)
      {
          cout<< "true"; exit(0);
      }
    
    }
    cout<<"false";

    return 0;
}