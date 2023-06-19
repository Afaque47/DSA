#include <iostream>
#include <math.h>
using namespace std;

 void EO(int n)
{ 
    string s= n%2==0?"Even":"Odd";
    cout<<s;
      
}

int main()
{
    int n;
    cin>>n;
    EO(n);
  
  return 0;
}

