#include <iostream>
using namespace std;
void conquer(int arr[],int s,int mid,int e){
    //create a new array to copy two sorted array
    int size=e-s+1;
    int *merged=new int[size];
    //indices
    int idx1=s;
    int idx2=mid+1;
    int idx=0;
    while(idx1<=mid && idx2<=e){
        if(arr[idx1]<arr[idx2]){
            merged[idx++]=arr[idx1++];
        }
        else{
            merged[idx++]=arr[idx2++];
        }
    }
    while(idx1<=mid){
        
        merged[idx++]=arr[idx1++];
        
    }
    while(idx2<=e){
        merged[idx++]=arr[idx2++];
    }
    
    for(int i=0; i<size; i++){
        arr[s++]=merged[i];
        
    }
    //delete dynamic 
    delete []merged;
}
void divide(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    //array1
    divide(arr,s,mid);
    //array2
    divide(arr,mid+1,e);
    //merge two sorted array
    conquer(arr,s,mid,e);
    
}
int main()
{
    int arr[] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n=15;
    divide(arr,0,n-1);
    for(auto i:arr){
        cout<<i<<" ";
    }
   
    return 0;
}