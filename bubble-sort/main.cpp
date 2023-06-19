#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>&arr)
{    
     int n=arr.size(); 
     for(int i=0;i<n-1;i++)           //   i<n-1 : kyonki last element ko already previous element ke saath compare kr chuke hain.
    {   bool swapped=false;          // optimization (what if given array is already sorted)
    
        for(int j=0;j<n-i-1;j++)   //   n-(i+1) : cuz in each round of 2nd loop, last elements get sorted.
        {
            if(arr[j+1]<arr[j])      // j++ & j+1 are two different things;  j++ stores the incresed value whereas j+1 doesnot.
            {                         
               swap(arr[j+1],arr[j]); 
               swapped=true;
            }
        
            
        }
        if(swapped==false)
        { break; }
    }
  
}
int main()
{ 
    vector<int>arr{0,2,-3,9,7};          
    bubbleSort(arr);
      for(int i:arr)
    {
        cout<<i<<" ";
    }
  
}





