#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int j=1;
    cout<<"Dynamic: ";
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
         arr[i]=new int[j];
         j++; 
        }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"Static: "<<endl;
    
   vector<vector<int>>v={{1,2,3},{4,5},{6,7,8,9}};
   int n2=v.size();
   
   for(int i=0;i<n2;i++){
       for(int j=0;j<v[i].size();j++){
           cout<<v[i][j]<<" ";
       }cout<<endl;
   }

    return 0;
}