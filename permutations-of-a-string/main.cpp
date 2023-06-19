#include <iostream>                         //https://www.codingninjas.com/codestudio/problems/permutations-of-a-string_985254
#include <vector>                           //leetcode.com/problems/permutations/description/
using namespace std;
void permutations(string str,vector<string>&ans,int idx){
    //base case
    if(idx>=str.length()){
        ans.push_back(str);
    }
    for(int i=idx;i<str.length();i++){
        
        swap(str[i],str[idx]);
        permutations(str,ans,idx+1);
        swap(str[i],str[idx]);
    }
}
int main()
{
    string str="ABC";
    vector<string>ans;
    int idx=0;
    permutations(str,ans,idx);
    
    for(string i:ans){
        cout<<i<<" ";
    }
    
    return 0;
}
