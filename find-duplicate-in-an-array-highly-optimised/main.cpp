#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int n)    //given:1 se n-1 tak value is there and one value is repeated once.
{   int sum=0;                    //find out the repeated value.
    for(int i=0;i<n;i++)
    {
      sum=sum^(arr[i]^i);  
    }
    return sum;
}
int main()    
{              
 int arr[7]={1,2,3,4,5,6,2} ;
   
 int k= duplicate(arr,7);
  
 cout<<k;
  
  return 0; 
}


