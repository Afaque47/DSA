#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

 int  reverse(int arr[], int n)
 {
     int start=0,end=n-1;
       while(start<=end)
       {
           swap(arr[start],arr[end]);
           start++;
           end--;
       }
       return 0;
}
void printArray(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
       cout<< arr[i]<<" ";
     }
     cout<<endl;
 }
int main()
{
    int  arr1[16]={2,3,15,45,10,-78,96,4,7,1,0,-3,14,84,-6,10};
    int     arr2[5]={1,4,-85,3,0};
         
         reverse(arr1,16);
         reverse(arr2,5);
         
         printArray(arr1,16);
         printArray(arr2,5);
         
         return 0;
}