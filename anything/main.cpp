#include <iostream>
using namespace std;

int main()
{   int key;
    cin>>key;
    float i=0,ans;
while(i*i<=key)
{
    ans=i;
    i=i+0.01;              // correct upto 2 decimal places
}
cout<<ans;
    return 0;
}