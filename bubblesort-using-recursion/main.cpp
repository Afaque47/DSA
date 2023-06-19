#include <iostream>
using namespace std;
void bubbleSort(int *arr,int n){
    //base case, already sorted
    if(n==0||n==1){
        return;
    }   // 1 case solve kr liya
        for(int i=0;i<n-1;i++)
        if(arr[i+1] < arr[i]){
           swap(arr[i+1],arr[i]);
        }
        // recursive call
        bubbleSort(arr,n-1);


    
}
int main()
{
    int arr[]={2,1,3,2,5,4,-1,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}