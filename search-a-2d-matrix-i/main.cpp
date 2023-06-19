#include <iostream>
#include <vector> 
#include <string>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0;
        int end=row*col-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int element=matrix[mid/col][mid%col];
            if(element==target){
                return true;
            }
            else if(element<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
        
    }
int main()
{
    vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target=13;
    bool ans=searchMatrix(matrix,target);
    string s=(ans==1) ? "present":"not present";
    cout<<s;

    return 0;
}