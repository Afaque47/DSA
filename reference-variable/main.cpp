#include <iostream>
using namespace std;

void func(int &n){
    n+=2;
}
int main()
{
    int i=5;
    int &j=i;
    cout<<"add: "<<&j<<" add: "<<&i<<endl;
    cout<<"val: "<< j<<" val: "<<i <<endl;
    int n=7;
    func(n);
    cout<<"7 is now: "<<n<<endl;
    
    
    
    
    return 0;
}