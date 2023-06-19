
#include <iostream>

using namespace std;

int main()
{   
    int array[5]={1,2,3,5};                //   Input:
    int n=5;                               //   N = 10
    int sum=0;                             //   A[] = {6,1,2,8,3,4,7,10,5}
     for(int i=0;i<=n-2;i++)               //   Output: 9
     {
     sum=(sum^array[i]);
    
     }
     for(int j=1;j<=n;j++)
     {
         sum=(sum^j);
     }
         cout<<sum;  
}
