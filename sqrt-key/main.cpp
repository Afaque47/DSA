#include <iostream>
using namespace std;

long long int findSquareRoot(long long int key)  
{
    unsigned int s=0,e=key;              // without unsigned int, for some bigger value 7777777772, 7653333333 
                                            //  it will be incorrect   .                                                    
    long long int ans;
    while(s<=e)
    {
       long long int mid=s+(e-s)/2;
        
        if(mid*mid==key)                    // note: mid*mid will be out of range of integer so 
        {  return mid; }                    // so use long long int else it wont be submitted.
        
        if(mid*mid<key)
        {   
            ans=mid;
            s=mid+1;
        }
        else
        { 
          e=mid-1;
        }
    }
    return ans;
}

int main()
{   int key;
    cin>>key;               
  
  cout<< findSquareRoot(key);
    

    return 0;
}


