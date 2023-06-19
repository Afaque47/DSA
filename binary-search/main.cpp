#include <iostream>
using namespace std;
int function(int arr[],int n,int key)
{   int start=0,end=n-1;

    while(start<=end)
    {
       int mid=start+(end-start)/2;          //mid=(start+end)/2; so that overflow na ho range se
       
       if(key==arr[mid])
       {
           return mid;
       }
      else if(key>arr[mid])
       
         {  start=mid+1;  }
       else //  if(key<arr[mid])
       
         { end=mid-1;  }
          
       
    }
     return -1;   
}

int main()
{   
int even[8]={-5,-4,-1,0,1,17,25,124};
int odd[7]={-5,-4,-1,0,1,17,25};

int E=function(even,8,-4);
int O=function(odd,7,17);
cout<<E<<endl<<O;

    return 0;
}