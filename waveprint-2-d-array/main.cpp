#include <bits/stdc++.h> 
using namespace std;
void wavePrint(int arr[][4], int nRows, int mCols)
{    vector<int>ans;
     for(int j=0;j<mCols;j++)
    { 
      if(j%2==0){
        for (int i = 0; i < nRows; i++) {
          ans.push_back(arr[i][j]);
        }
      } 
      else {
        for (int i = nRows - 1; i >= 0; i--) {
          ans.push_back(arr[i][j]);
        }
      }
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    
    wavePrint(arr,3,4);
    
    
    
return 0;
}