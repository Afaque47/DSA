#include <iostream>
using namespace std;

int main()
{
    int arr[10]={23,122,41,67};
    cout<<"address of 1st memory block: "<< arr  <<" or: "<<&arr[0]<<endl;
    cout<<"address of 2nt memory block: "<< arr+1<<" or: "<<&arr[1]<<endl;
    cout<<"value  at  1st memory block: "<<*arr  <<" or: "<< arr[0]<<endl;
    cout<<"value  at  3rd memory block: "<<*(arr+2)  <<" or: "<< arr[2]<<endl;
    cout<<"miscellaneous: "<<*arr+3<<endl;
    // Note: arr[i] == *(arr+i)  or  i[arr] == *(i+arr) 
    int i=3;
    cout<<"value at ith index: "<<i[arr]<<endl;
    // size: (size of 1 block * total number of elements) -> 4 bytes * 10 = 40 bytes
    cout<<"size of arr: "<<sizeof(arr)<<endl;
    
    int* ptr = arr;
    int* ptr1= &arr[0];
    cout<<"size of ptr: "<<sizeof(*ptr)<<", size of ptr1: "<<sizeof(ptr1)<<endl;
    cout<<"1st: "<<*ptr<<" 2nd: "<<*arr<<" 3rd: "<<*(ptr1+2)<<endl;
    // Note:arr=arr+1 cannot be writeen it means address of array cannot be changed or reassigned as it is assigned by symbol table
    // but we can write ptr=ptr+1, this is the diff b/w array and pointer
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr;
    
          
    return 0;
}