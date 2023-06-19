#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int function(int arr[], int n)              //A^B^A^C^B=C
{
    int sum =0;
    
    for(int i=0;i<n;i++)
    {
        sum=sum^arr[i];
        
    }
    return sum;
}





int main()
{
  int array[7]={1,8,-5,1,9,-5,8};
    
       int k=function(array, 7); 
        
        
      cout<< k; 
    
    
    
    
    
}
