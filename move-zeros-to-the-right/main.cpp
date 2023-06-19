#include<iostream>
#include<vector>
using namespace std;

void moveZerosToEnd(vector<int>&arr,int n)
{
  int j=0;
  for(int i=0;i<n;i++ )
  {   
      if(arr[i] != 0)
      {
          swap(arr[j],arr[i]);
          j++;
      }
  } 
    
}
int main()
{
    vector<int>arr{0,1,0,3,12};
    moveZerosToEnd(arr,arr.size());
  
 
    for(auto i:arr)
   {
       cout<<i<<" ";
   }
   
    return 0;
}
