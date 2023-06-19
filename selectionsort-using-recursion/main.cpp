#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
    //base case
    if(n==0||n==1){
        return;
    }
    int sIdx=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[sIdx]){
            sIdx=i;
        }
    }
    swap(arr[0],arr[sIdx]);
    //recursive call
    selectionSort(arr+1,n-1);
}
int main()
{
    int arr[]={2,1,3,2,5,4,-1,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
   
   return 0;
}