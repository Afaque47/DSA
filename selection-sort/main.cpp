#include <iostream>
#include<climits>
using namespace std;

void selectionSort(int arr[],int n)
{
      for(int i=0;i<n-1;i++)                 // < because i dont want to swap last one.
   {    int minIndex=i;
       for(int j=i+1;j<=n-1;j++)          // <= since comparing with all of the index.
       {
           if(arr[j]<arr[minIndex])       
           {
               minIndex=j;                    // updated the min value with j;
           }
       }
       swap(arr[i],arr[minIndex]);
      
   }
}
int main()
{
    int n=10;
    int arr[n]={2,3,1,5,7,0,-3,3,9,-1};
    
    selectionSort(arr,n);
    
  
    for(int i:arr)
    {
        cout<<i<<" ";
    }

    

    return 0;
}




