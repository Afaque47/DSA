#include <iostream>        //https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
#include <vector>
#include <string>
using namespace std;

void letterCombinations(string digits,string mapping[],string output,vector<string> &ans,int idx){
    //base case
    if(idx>=digits.length()){
        if(output.length()!=0)  ans.push_back(output);
        cout<<"Stored in ans on recursion call --> "<<output<<endl; 
        return;
    }
    int number=digits[idx]-'0';
    string str = mapping[number];
    
    for(int i=0;i<str.length();i++){
        output.push_back(str[i]);
        cout<<i<<" Before  --> "<<output<<endl;
        letterCombinations(digits,mapping,output,ans,idx+1);
        output.pop_back();
        cout<<i<<" After all recursion calls --> "<<output<<endl;
    }
    
}
int main(){
        string digits="23";
        vector<string>ans;
        string output;
        int idx=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        letterCombinations(digits,mapping,output,ans,idx);
        
        for(auto i:ans){
            cout<<i<<" ";
        }
        
        
        return 0;
}