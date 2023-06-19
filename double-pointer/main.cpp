#include <iostream>
using namespace std;

    int f(int x, int *py, int **ppz) {     //Note x is passed by value not by referance
    int y, z;                       
    **ppz += 1;
         z  = **ppz;
      *py += 2;
          y = *py;
        x += 3;                            // Here, this x has different address block so it wont update the passes value of x
    cout<<"x="<<x<<" y="<<y<<" z="<<z<<" x+y+z= ";
    return (x + y + z);
    }
int main()
{
    int i=5;
    int* ptr=&i;
    int**ptr2=&ptr;         // double pointer-> ptr1 ke data type(int*) ke saath * le lo
    //Accessing address of i
    cout<<"Address of i: "<<&i<<endl;
    cout<<"Address of i: "<<ptr<<endl;
    cout<<"Address of i: "<<*ptr2<<endl;
    //Accessing value of i
    cout<<"value of i: "<<i<<endl;
    cout<<"value of i: "<<*ptr<<endl;
    cout<<"value of i: "<<**ptr2<<endl;
    //Accessing address of ptr
    cout<<"Address of ptr: "<<&ptr<<endl;
    cout<<"Address of ptr: "<<ptr2<<endl;
    //Accessing address of ptr2
    cout<<"Address of ptr2: "<<&ptr2<<endl;
    //Imp Question
    int c, *b, **a;
    c =4;
    b =&c;
    a =&b;
    cout <<f(c, b, a);
    
    

    return 0;
}