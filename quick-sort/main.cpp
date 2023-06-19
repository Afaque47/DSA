#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){
    //pivot ko sahi jagah pe pahunchana h 
    int pivotIdx=s;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=arr[s]){
            pivotIdx++;
            swap(arr[i], arr[pivotIdx]);
        }
    }
    swap(arr[s], arr[pivotIdx]);
    
    return pivotIdx;
}
void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int pivotIdx=partition(arr,s,e);
    //recursive call to sort 2 arrays
    quickSort(arr,s,pivotIdx-1);
    quickSort(arr,pivotIdx+1,e);
}
int main()
{
    int arr[]={3,2,7,1,-2,7,4,9};
    int n=8;
    quickSort(arr,0,n-1);
    
    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}
