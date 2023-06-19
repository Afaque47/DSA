#include <iostream>
using namespace std;
int getSum(int **arr,int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}
int main()
{
    int row;
    cout<<"Enter row? ";
    cin>>row;
    cout<<"Enter col? ";
    int col;
    cin>>col;
    //creating a 2-D array 
    int**arr=new int*[row] ;     //pointer array in heap
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    //taking input
    cout<<"Enter Input? ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
            
        }
    }
    //ptinting output
    cout<<"Output:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"sum: "<<getSum(arr,row,col);
    //releasing heap memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete [] arr;
    

    return 0;
}

