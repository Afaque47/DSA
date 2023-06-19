#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;                          //compress the given array into the same given char array.
                                              //return the new size of chars.
    void compress(vector<char>& chars) {
        string s;
        int j;
        while(chars.size()){
        for(j=1;j<chars.size();j++){
            if(chars[0]==chars[j]) 
            {continue;}
            else break;
        }
           s.push_back(chars[0]);
           int count=j;
           if(count>1){
            s+=to_string(count);
         }
       chars.erase(chars.begin(),chars.begin()+count);
        }
       for(int i=0;i<s.length();i++){
       chars.push_back(s[i]);
       }
       cout<<chars.size()<<endl;
       for(auto i:chars){
           cout<<i<<" ";
       }
       
    
}   

int main()
{
   vector<char>chars{'a','a','b','b','b','a','a','a','b','b','b','b','b'};
   compress(chars);
   
   

   return 0;
}
