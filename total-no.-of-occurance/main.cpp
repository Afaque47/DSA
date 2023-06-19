#include<bits/stdc++.h>
using namespace std;

int funR(int arr[],int size,int key)
{  
       int start=0, end=size-1,ans;
      
    while(start<=end)
    {  
          int mid=start+(end-start)/2;
       
          if(key==arr[mid])
        { 
           ans=mid;
           start=mid+1;
           
        }
           else if(key>arr[mid])
        {
           start=mid+1;
        }
           else
        {
           end=mid-1;
        }
    }
    return ans;
    
}
int funL(int arr[],int size,int key)
{  
       int start=0, end=size-1,ans;
      
    while(start<=end)
    {  
          int mid=start+(end-start)/2;
       
          if(key==arr[mid])
        {
           ans=mid;
           end=mid-1;
        }
           else if(key>arr[mid])
        {
           start=mid+1;
        }
           else
        {
           end=mid-1;
        }
    }
    return ans;
    
}

int main()
{
   int arr[8]={1,2,3,15,15,15,15,17};
   
 int k=funL(arr,8,15);
 int l=funR(arr,8,15);
 
  
   cout<<"Total No. of Occurance="<< (l-k+1);

    return 0;
}
