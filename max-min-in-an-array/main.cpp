#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
void array(int arr[],int n)
{  
   int p=INT_MIN, q=INT_MAX;
    for(int i=0;i<n;i++)
    {
         p = max(arr[i],p);        //  if (arr[i]>p)
                                  //  { p=arr[i];  
    
         q = min(arr[i],q);      //  if (arr[i]<q)
                                 //  { q=arr[i]; }
    }
    cout<<"max="<<p<<" "<<"min="<<q;
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
     array(array1,n);
}