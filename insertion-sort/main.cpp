#include <iostream>
using namespace std;
int main()
{   int n=5;
    int arr[n]={3,-3,0,2,6};
    
    for(int i=1;i<n;i++)
    {   
        int insert=arr[i];      // insert me store kerna jaruri hai nhi to during shifting i index me value change hota rehta hai
        int j=i-1;
        for(;j>=0;j--)
        {
            if(insert<arr[j])
            // right shift
            {  arr[j+1]=arr[j]; }   
          else
          { break; }
        }
        arr[j+1]=insert;        // j+1 me isliye kyonki j-- jab hota hai to loop se bahar aane pe j ka value 
                                //ek no. pchhe chala jata hai
        
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }

    return 0;
}

