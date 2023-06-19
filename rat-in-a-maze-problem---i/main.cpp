#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isSafe(vector<vector<int>>&m,int n,int row,int col,vector<vector<int>>visited){
        if( (row>=0 && row<n) && (col>=0 && col<n) && m[row][col]==1 && visited[row][col]==0){
            return true;
        }
        else {
            return false;
        }
        
    }

void pathFinder(vector<vector<int>>&m,int n,vector<vector<int>>visited,string output,
                    vector<string>&ans,int i,int j){
    //base case
     if(i==n-1 && j==n-1){
         ans.push_back(output);
         return;
     }
     visited[i][j]=1;
    // 4 choices :- 
    
    //right
     int row=i;
     int col=j+1;
    // right jana allowed h?
     bool clearPath=isSafe(m,n,row,col,visited);
     
    if(clearPath==1){
        output.push_back('R');
        pathFinder(m,n,visited,output,ans,row,col);
        output.pop_back();
    }
     //down
     row=i+1;
     col=j;
     clearPath=isSafe(m,n,row,col,visited);
    if(clearPath==1){
        output.push_back('D');
        pathFinder(m,n,visited,output,ans,row,col);
        output.pop_back();
    }
     
     //left
     row=i;
     col=j-1;
    clearPath=isSafe(m,n,row,col,visited);
    if(clearPath==1){
        output.push_back('L');
        pathFinder(m,n,visited,output,ans,row,col);
        output.pop_back();
    }
    
    //up
     row=i-1;
     col=j;
     clearPath=isSafe(m,n,row,col,visited);
    if(clearPath==1){
       output.push_back('U');
       pathFinder(m,n,visited,output,ans,row,col);
        output.pop_back();
       
    }    
    
     visited[i][j]==0;
}

int main()
{
    vector<vector<int>> m{ {0,0,1}, {1,1,1}, {0,1,1} };
    int n=3;

        vector<string>ans;
       // *imp to stand on m[0][0] you need permission
        if(m[0][0]==0){
            cout<<-1;
            return 0;
        }
      // created a new 2d matrix to keep track of movement       
        vector<vector<int>>visited(n,vector<int>(n,0));
      // to store L,R,D,U
        string output;
      
        int i=0,j=0;
        
        pathFinder(m,n,visited,output,ans,i,j);
        
        sort(ans.begin(),ans.end());
        
        for(auto i:ans){
            for(auto j:i){
                cout<<j<<" ";
                
            }cout<<endl;
            
        }

    return 0;
    
}