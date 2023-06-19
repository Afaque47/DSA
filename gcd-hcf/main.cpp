#include <iostream>
using namespace std;

int gcd(int a,int b){          //to find LCM apply-> HCF * LCM = product of two nos.
                               //  hcf*lcm==a*b;
     if(a==0){                 //  lcm=a*b/hcf;
         return b;
     }
     while(a){
         int rem=b%a;
         b=a;
         a=rem;
         
         
     }
     return b;
}
int main()
{
    int a=121, b=11;
    cout<<"GCD: "<<gcd(a,b);
    

    return 0;
}