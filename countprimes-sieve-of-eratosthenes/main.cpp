#include <iostream>
#include <vector>
using namespace std;
int countPrimes(int n){
    vector<bool>prime(n,true);          // O(nlog(logn)) ->time complexity
    int cnt=0;
   // prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            cnt++;
        }
        for(int j=i*i;j<n;j=j+i){   //j=i*2 is not written because its multiple(less than i*i) is already cancelled by previous no.
            prime[j]=false;
        }
    }
    return cnt;
    
}
int main()
{   int n;
    cin>>n;
    cout<<"count : "<<countPrimes(n);
    return 0;
}
