#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
   
bool fun(int ar[], int n,int key){
  for(int i=0;i<n;i++)
     {
         if(ar[i]==key)
         {
             return 1;
         }
     }
           
             return 0;
      }  
int main(){
    int key;
   int  arr[16]={2,3,15,45,10,-78,96,4,7,1,0,-3,14,84,-6,10};
   
    cout<<"Enter a no. you want to search?";
    
    cin>>key;
   bool  k= fun(arr,16,key);
     
     if(k)
     
     { cout<<"present"; }
     
     else
     
     {cout<<"absent";} 
     
     
    

}

