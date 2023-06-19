#include <iostream>
using namespace std;
int main()
{  
    int arr[5]={3,-3,0,2,6};
    int n=5;
    
    int i=1;
    while(i<=n-1)
    {   int insert=arr[i];      // insert me store kerna jaruri hai nhi to during shifting i index me value change hota rehta hai
        int j=i-1;
        while(j>=0)
        {
            if(insert<arr[j])
            { arr[j+1]=arr[j]; }
            else
            { break;}
            j--;
        }
        arr[j+1]=insert;          // j+1 me isliye kyonki j-- jab hota hai to loop se bahar aane pe j ka value
     i++;                        //ek no. pchhe chala jata hai
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

