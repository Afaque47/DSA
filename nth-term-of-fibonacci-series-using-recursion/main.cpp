#include <iostream>
using namespace std;
int fibonacci(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //recursive relation
    int ans=fibonacci(n-1)+fibonacci(n-2);

    return ans;
     
   
   
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
 /* for(int i=0;i<=n;i++)        // printing each term starting from 0th term
    cout<<fibonacci(i)<<" ";
 */
    

    return 0;
}