#include <iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        //loop 1 
       int loop1=n-i+1,num=1;
        while(loop1)
        {
            cout<<num;
            loop1--;
            num++;
        }
        //Loop 2 
        int loop2=2*i-1;
        while(loop2)
        {  
            cout<<"*";
            loop2--;
        }
      
        // loop 3 
        int loop4=n-i+1;
        while(loop4)
        {
            cout<<loop4;
            loop4--;
            
        }   
        
       
       cout<<"\n";
        i++;
        
    }
    
}
