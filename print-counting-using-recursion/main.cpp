#include <iostream>
using namespace std;
void counting(int n){
    if(n==0){
    return ;
    }
   cout<<n<<" ";
   counting(n-1);           // head recursion
   cout<<endl;
   cout<<n;
  
   
   
   
    
}
int main()
{   
    int n;
    cin>>n;
    counting(n);

    return 0;
}