#include <iostream>
using namespace std;
int power(int m ,int n){
    //base case
    if(n==0 ){
        return 1;
    }
    if(n==1){
        return m;
    }
    //recursive call
    int ans=power(m,n/2);
    //even
    if(n%2==0){
        return ans*ans;   
    }
    //odd
    else{
        return ans*ans*m;
    }
}
int main()
{
    int m,n;
    cout<<"Enter base: ";
    cin>>m;
    cout<<"Enter power: ";
    cin>>n;
    cout<<power(m,n);

    return 0;
}