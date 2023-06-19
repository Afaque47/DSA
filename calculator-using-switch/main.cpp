#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter operation: ";
    cin>>op;
    cout<<"Enter b: ";
    cin>>b;
   switch(op)
    {
    case '+': cout<<a+b; break;
    case '-': cout<<a-b; break;
    case '*': cout<<a*b; break;
    case '/': cout<<a/b; break;
    case '%': cout<<a%b; break;
    default : cout<<"invalid operation";
    }
   

    return 0;
}