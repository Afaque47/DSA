#include <iostream>
#include <vector>
#include <string>
using namespace std;

  bool searchMatrix(vector<vector<int>> & matrix, int target) {
       // index initialisation
        int row=matrix.size();
        int col=matrix[0].size();
        int rowIndex=0;
        int colIndex=col-1;
        
        while(rowIndex < row &&  colIndex>=0){
          int element=matrix[rowIndex][colIndex];
          if(element==target){
              return true;
          }
          else if(element<target){
              ++rowIndex;
              }
          else{
              --colIndex;
          }
        }
        return false;
        
    }
int main()
{
    vector<vector<int>>matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target=25;
    bool ans= searchMatrix(matrix,target);
    
    string s= ans==1? "found":"Not found";
    cout<<s;
   

    return 0;
}