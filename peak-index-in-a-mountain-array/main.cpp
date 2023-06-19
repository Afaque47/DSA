#include <iostream>
using namespace std;

int main()
{
    int arr[9]={1,2,3,4,5,4,3,1,0};
    
     int s=0, e=8;
        while(s<e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1])
            {
                s=mid+1;
            }
            else
            {
              e=mid;
            }
        }   
      cout<<e;      // start and end 1 hi jagah aa jata hai so cout<< s;

    return 0;
}

