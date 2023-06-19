#include <iostream>
using namespace std;

unsigned long long factorial(int n,int m){
    unsigned long long res=1;
    while(n){
    res=( (res%m) * (n%m) ) % m;
     --n;
    }
    return res;
}
int main()
{
    int n=216;
    int m=1000000007;            // 10^9 + 7
    
    cout<<factorial(n,m);

    return 0;
}