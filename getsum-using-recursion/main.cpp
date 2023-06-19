#include <iostream>
using namespace std;
int getSum(int arr[],int n){
    if(n<0) return 0;
    
    return getSum(arr, n-1)+arr[n];
    
}
int main()
{
    int arr[]={-1,3,2,6,4,13,3 };
    int n=7;
    cout<<getSum(arr,n);

    return 0;
}

