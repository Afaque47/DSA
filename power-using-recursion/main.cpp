#include <iostream>
using namespace std;
int power(int n,int &m){
    //base case
    if(n==0){
        return 1;
    }
    //recursive relaton
    return m*power(n-1,m);
}
int main()
{
    int n,m;
    cout<<"base m? ";
    cin>>m; 
    cout<<"index n? ";
    cin>>n;
    cout<<"result m^n:"<<power(n,m);

    return 0;
}
