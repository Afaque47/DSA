#include <iostream>
using namespace std;

int getPivot(int arr[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0])
       { s=mid+1;}
       else 
       {
           e=mid;
       }
     }
     return e;
}
int getBinarySearch(int arr[],int s,int e,int key)
{
   while(s<=e)
   {
       int mid=s+(e-s)/2;
       if(arr[mid]==key)
       {
           return mid;
       }
       else if(key>arr[mid])
       {
           s=mid+1;
       }
       else
       {
           e=mid-1;
       }
    }
    
    return -1;      //to show that no such key is present.
    
}

int main()

{  int arr[6]={5,6,7,1,3,4};
   int key=3;
  int pivot=getPivot(arr,6);
 
  if(key>=arr[pivot] && key<=arr[5])
  {
     cout<< getBinarySearch(arr,pivot,5,key);
  }
  else{
      cout<<getBinarySearch(arr,0,pivot-1,key);
  }
  return 0;

}