#include <iostream>                    // POINTER
using namespace std;

int main()
{
    int num=5;
    //initialising pointer
    int *ptr =  &num;                 //ptr is pointer to int,  ptr me num ka address store hai
    //address of operator - &
     cout<<"address of num: "<< &num <<",   address of ptr-> "<<ptr<<endl;
    //accessing value
    cout<<"value of num: "<<num<<",  value of num accessed by pointer-> "<<*ptr<<endl;
    //size of pointer of any data type is always 8 bytes
    cout<<"size of num: "<<sizeof(num)<<", size of pointer: "<<sizeof(ptr)<<endl;
   
    int i=10;
    int *p;         //p is storing garbage address
    p = &i;            //now, p is storing address of i    
    cout<<"value stored by address i: "<<*p<<endl;
    // passed by reference,so pointer points to original value 
    int k=7;
    int *l=&k;
    (*l)++;
    cout<<k<<" "<<*l<<endl;
    // increment of pointer address
    int b=4;
    int *t=&b;
    cout<<"before t: "<<t<<endl;
    t=t+1;
    // Note: agle address pe pahunch gya, int is of 4 byte so 4 byte address me add ho gya
    cout<<"after t: "<<t<<endl;
    
    // copying a pointer
    int a=9;
    int *p1=&a;
    int *p2=p1;
    cout<<"address of p1: "<<p1<<", address of p2: "<<p2<<endl;
    cout<<"value by p1: "<<*p1<<", value by p2: "<<*p2<<endl;
    
    
    return 0;
}