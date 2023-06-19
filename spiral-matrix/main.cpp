#include<iostream>
#include<vector>
using namespace std;
vector<int>spiralArray(vector<vector<int>>&matrix){
    
    vector<int>v;
    int count=0;
    int row=matrix.size();
    int col=matrix[0].size();
    int size=row*col;
    
    //index initialisation
    int startRow=0;
    int startCol=0;
    int endRow=row-1;
    int endCol=col-1;
    while(count<size){
        //starting row
        for(int i=startCol;i<=endCol&&count<size;i++){
            v.push_back(matrix[startRow][i]);
            ++count;
        }
        ++startRow;
        //end col
        for(int i=startRow;i<=endRow&&count<size;i++){
            v.push_back(matrix[i][endCol]);
            ++count;
        }
        --endCol;
        //end row
        for(int i=endCol;i>=startCol&&count<size;i--){
            v.push_back(matrix[endRow][i]);
            ++count;
        }
        --endRow;
        //start col
        for(int i=endRow;i>=startRow&&count<size;i--){
            v.push_back(matrix[i][startCol]);
            ++count;
        }
        ++startCol;
        }
    return v;
}
int main()
{
    vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    auto v=spiralArray(matrix);
    for(auto i:v){
        cout<<i<<" ";
    }
 return 0;
}
