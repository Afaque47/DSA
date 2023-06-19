#include <iostream>
using namespace std;
int getPivot(int arr[],int n)
{     
  int  s=0,e=n-1;
      while(s<e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]>=arr[0])           // i wrote arr[s] instead of arr[0]/arr[e] and spent entire 2 days to see where i got wrong.
            { s=mid+1; }
            else
            {  e=mid; }                  
        }   
        
        return e;                         // start and end 1 hi jagah aa jata hai so cout<< s;
}

int main()
{   int arr[8]={4,7,9,19,0,1,2,3};        // int arr[5] = {1, 3, 8, 10, 17}; sorted hai so pivot is 17 here.
        
     cout<<"pivot is "<<getPivot(arr,8);
      
  return 0;
}




