#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

    int duplicate(int arr[],int n)
{   int sum=0;
    for(int i=0;i<n;i++)
    {   
        sum=(sum^arr[i]);
    }
    for(int i=1;i<n;i++)
    {
        sum=(sum^i);
    }
   
    return sum;
    

}

int main()     //given:1 se n-1 tak value is there and one value is repeated once.
{              //find out the repeated value.
   int arr[7]={1,2,3,4,5,6,2} ;
   
 int k= duplicate(arr,7);
  
 cout<<k;
  
  return 0; 
}
