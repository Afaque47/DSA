#include <iostream>
#include <math.h>
using namespace std;
void tatti(int array00[], int n)
{   
    for(int i=0;i<n;i++){
        cout<<array00[i]<<" ";
    }
    
}
void tatti(char array0[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<array0[i]<<" "; 
    }
}

int main()
{
  int array1[5]={0};
  int array2[5]={1,2,3,4,5};
  int array3[10];
  fill_n (array3,10,9);
  char array4[5]={'a','b','c','d','e'};
 
   
    tatti(array1,5);cout<<endl;
    tatti(array2,5);cout<<endl;
    tatti(array3,10);cout<<endl;    
    tatti(array4,5);cout<<endl;
 

    return 0;
}


 

