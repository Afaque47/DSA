#include <iostream>
using namespace std;
int getSum(int *arr,int n){   //i can also write arr[] instead of *arr
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Size of array?";
    cin>>n;
    //initialising array of dynamic nature
    int *arr=new int[n];
    cout<<"Input?";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum= "<<getSum(arr,n)<<endl;
     

    return 0;
}