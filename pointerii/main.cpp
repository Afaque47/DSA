#include <iostream>
using namespace std;
//3rd
int getSum(int arr3[]){
    int sum=0;
    for(int i=0;arr3[i]!=0;i++){
        sum+=arr3[i];
    }
    return sum;
}

//2nd
int update(int *arr2,int n){         // i can also write *arr2 instead of arr2[]
    
   return sizeof(arr2);
}


//1st
void pointer(int *ptr){     
      *ptr =*ptr+1;
       ptr = ptr+1;
       
}
int main()
{
    int arr[5]={1,2,3,4,5};
// char ch[5]="abcde";5 nhi likh sakte kyonki char array me jab string dal jata hai to khatam null char pe hota hai, so 5 plus 1 more
    char ch[6]="abcde";
    cout<<arr<<endl;         // address
    cout<<ch<<endl;          // print entire content
    cout<<&ch<<endl;         // address
    int* parr=&arr[0];
    char* pch=ch;
    cout<<"address of array's 0th index: "<<parr<<endl;
    cout<<"address of char's  0th index: "<<pch<<endl; // here we learnt that char address cannot be known
// 1st Function
    int arr1[10]={13,1,19,17,6};
    int* ptr=arr1;
    cout<<"Value before: "  <<*ptr<<endl;
    cout<<"Address before: "<<ptr <<endl;
    pointer(ptr);                               // address dont get updated since it is copied when passed to function
    cout<<"Value after: "  <<*ptr<<endl; 
    cout<<"Address after: "<< ptr<<endl;
// 2nd function 
    int arr2[5]={1,2,3,4,5};                  //Note:array pass kerna matlab pointer pass kerna
    update(arr,5); 
    cout<<"before function call size: "<<sizeof(arr2)<<endl;
    cout<<"after  function call size: "<<update(arr2,5)<<endl;
// 3rd function   find sum of last 3 elements
    int arr3[7]={1,2,3,4,5,6,7};
    int n=7;
    int i=n-3;
    getSum(arr3+i);   // part of the array pass kr rhe
    cout<<"sum: "<<getSum(arr3+i)<<endl;
    
    
    char cc[]="hello";
    char* pp=cc;
    cout<<"1st: "<<cc[0]<<" 2nd: "<<pp[0];      // pointer ki bhi indexing kr skte ho
    
    
    
    
return 0;
}
