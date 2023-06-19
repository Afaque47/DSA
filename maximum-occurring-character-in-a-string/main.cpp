#include<iostream>
#include<algorithm>
using namespace std;

pair<char,int>FindMaxOccurringCharacter(string s)
{
    int n=26;
    int arr[26]={0};
    if(s.empty())
    {   
        cout<<"Error: Input string is empty "<<endl;
        return {' ',0};
    }
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i]) )  // i made it case in-sensative
       { 
          char ch=tolower(s[i]);
          arr[ch-'a']++; 
       }

    }
    int x= distance(arr,max_element(arr,arr+n));
    char ch='a'+x;
  //  pair<char,int>p{ch,arr[x]};
    return {ch,arr[x]};
}

int main()
{   
  string s;
  cout<<"Enter Character: ";
  getline(cin,s);                                            // in case of character array cin.getline(arr,size);
  
  pair<char,int>result=FindMaxOccurringCharacter(s);          //i can also use auto instead of pair<char,int>
  cout<<"max occurring char: "<<result.first<<" -> "<<result.second<<endl;
    
    
}     


