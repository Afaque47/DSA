#include <iostream>
using namespace std;

bool linearSearch(int arr[],int n, int key){
    //base case
    if(n==0){
        return false;
    }
    //processing
    if(arr[0]==key){
        return true;
    }
    //recursive relation
    else{
        return linearSearch(arr+1,n-1,key);
       
    }
}
int main()
{
    int arr[7]={2,1,7,3,5,9,-3};
    int n=7;
    int key;
    cout<<"Enter key: ";
    cin>>key;
    string s= linearSearch(arr,n,key)==1? "key found":"key not found";
    cout<<s;
    
    return 0;
}