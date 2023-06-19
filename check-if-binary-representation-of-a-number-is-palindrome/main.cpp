#include <iostream>
using namespace std;
bool solve(string str,int s,int e){
	//base case
	if(s>e){
		return true;
	}
	if(str[s++]==str[e--]){
	    return solve(str,s,e);
	}
	else{
		return false;
	}
  	
}
int main()
{   
    int N;
    cin>>N;
    string str;
    while(N){
        
        str+=to_string(N&1);        //str.push_back(N&1);
		N=N>>1;
    }
		int s=0,e=str.length()-1;
	    
	string ans=solve(str,s,e)==1?"Palindrome":"Not Palindrome";
	cout<<ans;

    return 0;
}

