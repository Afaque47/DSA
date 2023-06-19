#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void rotateMyArray(vector<int>&arr,int n,int k)
{
    rotate(arr.rbegin(),arr.rbegin()+k,arr.rend());  //anti-clockwise rotation
}
void rotateArray(vector<int>&arr,int n,int k)
{
    vector<int>temp(n);
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];     // let say if k=1, (n-1) is last element 
    }                             // (n-1) + k  -> n
                                  // (n-1)+k % n  -> n%n==0
       arr=temp;                  // n-1 is nothing but index -> (i+k)%n  is the required formula in which we can copy.
   
}

int main()
{
    vector<int> arr{1,2,3,4,5,6,7};       // rotate the array to the right by k steps
    int k=8;
    int n=arr.size();
    k=k%n;
    rotateArray(arr,n,k);
    for(auto i:arr)
    {
        cout<<i<<" "; }  cout<<endl;
    rotateMyArray(arr,n,k);
    for(auto i:arr)
    {
        cout<<i<<" "; }

    return 0;
}
