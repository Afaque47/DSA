#include <bits/stdc++.h> 
using namespace std;

bool isPalindrome(const string &s) 
{
    int start = 0, end = s.length() - 1;
    
    // check whether the string is a palindrome, ignoring non-alphanumeric characters and case sensitivity
    while (start <= end) 
    {
    // check whether the current character is an alphabet or number
        if (!isalnum(s[start])) 
        {
            start++; 
            continue;
        }
        if (!isalnum(s[end])) 
        {
            end--; 
            continue;
        }

        // convert the characters to lower case if they are case sensitive
        auto ch1 = tolower(s[start]);
        auto ch2 = tolower(s[end]);
        
        if (ch1 != ch2) {
            return false;
        } else {
            
            start++;
            end--;
        }
    }
    
    return true; 
}
bool isMyPalindrome(string s)     //  using extra space
{  
    string s1;
    for(int i=0;i<s.length();i++)
    { 
       if(isalnum(s[i]) ) 
       s1.push_back(  tolower(s[i]) );
    }
    s.clear();
    for(int i=s1.length()-1;i>=0;i--)
    {
        s.push_back(s1[i]);
        
    }
   if(s.compare(s1)==0)
   {
       return true;
   } else{
   return false; 
   }
}

int main() {
    string s = "Madam, in Eden, I'm Adam";                //   "N2 i&nJA?a& jnI2n"
    cout << "isPalindrome: " << isPalindrome(s) << endl;
    cout<<  "isMyPalindrome: " << isMyPalindrome(s);
    return 0;
}

