#include<iostream>
#include<vector>
using namespace std;
bool isArrayRotatedAndSorted(vector<int>&nums) 
{
                                         // case1: array is already sorted             -> i.e count=0
      int n= nums.size();                // case2: array is rotated                    -> i.e count=1
      int count=0;                       // case3: all the elements of array are equal -> i.e count=0
                                         // case4: array are not roataed & sorted [only here i will return false] -> i.e count>1
      for(int i=0;i<n-1;i++)
      {
        if(nums[i+1]<nums[i])            // pichhla value max 1 baar hi rotaed sorted array me bada ho sakta hai
          {  count++; }                 
      }
      
      return (count<=1);                 // if case3 nums={1,1,1,1,1} ho to ek baar bhi nhi bda milega i.e why count<=1
      
}
int main()
{     
    vector<int> nums = {3, 4, 5, 1, 2};  
    cout << (isArrayRotatedAndSorted(nums) ? "Array is sorted and rotated" : "Array is not sorted and rotated") << endl;
    return 0;
    
}

