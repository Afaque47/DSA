#include <iostream>
using namespace std;
#define ull unsigned long long 
// finding factorial
ull factorial(int n){    
    // base case
    if(n==0){
       return 1;
    }
    // Recursive relation
    ull ans = n*factorial(n-1);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
