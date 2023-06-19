#include <iostream>
using namespace std;
int main(){
    

//Null Pointer
int *  ptr=NULL;
cout << "The value of ptr is " << ptr<<endl;

//Double Pointer
int a = 10;
int *p = &a;
int**q= &p;
cout<<a <<" "<<*p<<" "<<**q<<endl;
cout<< &a <<" "<< &p<<" "<< &q<<endl;
//Void Pointer
void *pt;
int i = 10;
pt = & i;        //typecast
cout << "Address of variable i: " << & i <<endl;
cout << "Address where the void pointer is pointing: " << pt << endl;
//Wild Pointers
int ptr1;                    //wild pointer 
int a = 10;
ptr1= & a;                  // p is not a wild pointer now
*ptr1= 12;                  // This is fine. Value of a is changed
/* Dangling pointer
   
   A dangling pointer is a pointer pointing to a memory location that has been freed (or deleted). 
   There are three different ways where Pointer acts as a dangling pointer.  
   a. function call
   b. deallocation of memory
   c. variable goes out of scope


    
    

return 0;   
}