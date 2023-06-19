#include <iostream>
#include <vector>
using namespace std;

  void rotate(vector<vector<int>>& matrix,int row,int col) {
    
        vector<vector<int>>arr(row,vector<int>(col));
        int endCol=col-1;
        for(int i=0;i<=row-1;i++){
        int startRow=0;
        for(int j=0;j<=col-1;j++){
            arr[startRow][endCol]=matrix[i][j];
            ++startRow;
         }
            --endCol;
         }
             matrix=arr;
             
        
    }
int main()
{
    vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row=matrix.size();
    int col=matrix[0].size();
    rotate(matrix,row,col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<matrix[i][j]<<"  ";
            
        }
        cout<<'\n';
    }
    return 0;
}