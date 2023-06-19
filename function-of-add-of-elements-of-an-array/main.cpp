#include <iostream>
//#include<numeric>
using namespace std;
int array(int arr[],int n)
{ int sum=0;
 
     for(int i=0;i<n;i++){          //auto k= accumulate(arr,arr+n,0); 
      sum+=arr[i];
    
 }
    return sum;
}
int main()
{ int n;
  cout<<"Size=";
  cin>>n;
  int array1[100];
  cout<<"element=";
  for(int i=0;i<n;i++)
  {
      cin>>array1[i];
  }
    int k= array(array1,n);
    cout<<k;
}
