#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int  Rs100,Rs50,Rs20,Rs10,Rs5,Rs1;
    switch(1)
    {
        case 1: Rs100=n/100; 
                n=n%100;
               if(Rs100)
               cout<<"Total Rs100 notes:"<<Rs100<<endl;
                
        case 2:  Rs50=n/50; 
                 if(Rs50)
                 cout<<"Total Rs50 notes:"<<Rs50<<endl;
                 n=n%50;
                
        case 3:  Rs20=n/20; 
                 if(Rs20)
                 cout<<"Total Rs20 notes:"<<Rs20<<endl;
                 n=n%20;
        
        case 4:  Rs10=n/10; 
                 if(Rs10)  
                 cout<<"Total Rs10 notes:"<<Rs10<<endl;
                  n=n%10;
        case 5:  Rs5=n/5;  
                 if(Rs5)
                 cout<<"Total Rs5 notes:"<<Rs5<<endl;
                 n=n%5;
        case 6:  Rs1=n/1;   
                 if(Rs1)
                 cout<<"Total Rs1 notes:"<<Rs1<<endl;
                 break;
                
        }    
    return 0;
}
