#include <iostream>
#include<vector>
using namespace std;
  int compress(vector<char>& chars) {
        int i = 0, res = 0;
        while (i < chars.size()) {
            int count = 1;
            while (i + count < chars.size() && chars[i + count] == chars[i]) {
                count++;
            }
            chars[res++] = chars[i];
            if (count > 1) {
                for (auto c : to_string(count)) {
                    chars[res++] = c;
                }
            }
            i += count;
        }
        return res;
    }
int main()
{
     vector<char>chars{'a','b','b','b','a','a','a','b','b','b','b','b'};
     int res=compress(chars);
    
     cout<<"size of chars: "<<chars.size()<<endl;
     for(auto i:chars){
         cout<<i<<" ";
     }cout<<endl; 
     chars.resize(res);                             // after resize
     cout<<"size after resize: "<<chars.size()<<endl;
     for(auto i:chars){
         cout<<i<<" ";
     } 
   

    return 0;
}




