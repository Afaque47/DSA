#include <iostream>
#include <string>
using namespace std;
bool isSorted(int arr[], int n){

    if(n==0||n==1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1,n-1);
         
    }
}
int main()
{   
    int arr[]={1,3,4,6,6,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    string s=  isSorted(arr,n)==1?"sorted":"Not sorted";
    cout<<s;

    return 0;
}