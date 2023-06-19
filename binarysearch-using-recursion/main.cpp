#include <iostream>
using namespace std;
int binarySearch(int *arr,int s,int e,int key){
    
    //base case
    if(s>e){
        return -1;
    }
    
    int mid=s+(e-s)/2;
    
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
    
    
}
int main()
{
    int arr[]={-5,1,3,5,6,8,12};
    int n=7;
    int key;
    cin>>key;
    cout<<"index: "<<binarySearch(arr,0,n-1,key);

    return 0;
}