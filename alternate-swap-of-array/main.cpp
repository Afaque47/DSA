#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int function (int array[],int n)
{  
    int start=0,start1=1;
    while(start1<=n-1)
    {
        
       swap(array[start],array[start1]);
       start+=2;
       start1+=2;
    }
    return 0;
}

void printarray (int array[],int n)
{
    for(int i=0;i<n;i++)
    {
       cout<<array[i]<<" "; 
    }
}

int main()
{
    int array1[6]={0,1,2,3,4,7};
    function(array1,6);
    printarray(array1,6);
    return 0;
}

