#include <iostream>
#include<string>
using namespace std;

string removeOccurrences(string s, string part) {
        int n=part.length();
        while(s.find(part)<s.length() && s.length()!=0){
             auto sIndex=s.find(part);
             s.erase(sIndex,n);
       }

        return s;
    }
int main()
{
    string s="eemckxmckx";
    string part="mckx";                   //"emckx" -> ans = nil
   cout<< removeOccurrences(s,part)<<endl;
    

    return 0;
}