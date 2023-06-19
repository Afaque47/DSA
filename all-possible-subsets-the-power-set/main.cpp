#include <iostream>
#include <vector>
using namespace std;
//all subsets=2^n , n= total elements in a set

void subsets(vector<int>nums,vector<int>output,vector<vector<int>> &ans,int n,int idx){
    
    //base case
    if(idx>=n){
        ans.push_back(output);
        return;
    }
    //exclude
    subsets(nums,output,ans,n,idx+1);
    //include
    output.push_back(nums[idx]);
    subsets(nums,output,ans,n,idx+1);
}
int main()
{
    vector<int>nums{1,2,3};
    vector<int>output;
    vector<vector<int>>ans;
    int idx=0;
    int n=nums.size();
    subsets(nums,output,ans,n,idx);
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }cout<<"  ";
    }

    return 0;
}