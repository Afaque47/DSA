#include <iostream>
using namespace std;

void mergeSortedArrays(int arr1[], int n, int arr2[], int m , int arr3[])
{   
    int i=0, j=0, k=0;
    while(i<n&&i<m)
 {
    if(arr1[i]<arr2[j])
    {
        arr3[k]=arr1[i];
        i++;
    }
    else
    {
        arr3[k]=arr2[j];
        j++;
    }
    k++;
 }
    

     while(i<n)
    {  
      arr3[k]=arr1[i];
       i++;
       k++;
    }
  
   while(j<m)
    {
     arr3[k]=arr2[j];   
     j++;
     k++;   
    }  
   }
   
int main()
{
    int arr1[8]={1,2,2,3,4,7,7,9};
    int arr2[6]={-2,0,3,3,8,9};
    int arr3[14];
    
    mergeSortedArrays(arr1, 8, arr2, 6, arr3);
    for(auto i:arr3)
    {
        cout<<i<<" ";
    }

    return 0;
}
