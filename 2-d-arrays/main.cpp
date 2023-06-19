#include <iostream>
#include <climits>
using namespace std;
bool isPresent(int arr[][4],int row,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}



void printing(int arr[][4],int row,int col)
{    
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{   
  /*  
    //creating 2-D arrays
     const int m=3,n=4;
     int arr[m][n];
    
    
    //taking input rowise
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing output
 
    printing(arr,m,n);
 
   // taking input coloumnwise
   for(int j=0;j<4;j++)
   {
       for(int i=0;i<3;i++){
           cin>>arr[i][j];       }
   }cout<<endl;
   //printing output
 
   printing(arr,m,n);     */
                               
    const int m=3,n=4;
    int arr[m][n]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
  //printing output
   
   printing(arr,m,n); 
  //Linear Search
  int target;
  cin>>target;
  string s=isPresent(arr,m,n,target)==1 ? "target found":"not found";
  cout<<s<<endl;
  //to print sum row wise
  for(int i=0;i<3;i++)
  {   
      int sum=0;
      for(int j=0;j<4;j++){
          sum+=arr[i][j];
      }
      cout<<sum<<" ";
  }cout<<endl;
  //to print largest col sum and also col ;
  int largestColSum=INT_MIN , col=-1;
  for(int j=0;j<4;j++)
  {   int sum=0;
      for(int i=0;i<3;i++){
          sum+=arr[i][j];
      }
      if(sum>largestColSum){
          col=j;
          largestColSum=sum;
      }
  }
  cout<<largestColSum<<" "<<col;
  
 
  
 
return 0;
}