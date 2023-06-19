#include <iostream>
#include<array>
#include<algorithm>
using namespace std;

int main()  // Array STL
{
    array<int,5> arr={0,-7,9,3,1};
    cout<<arr.empty()<<endl;               //boolean ( 0 for no and 1 for yes.)
    cout<<arr.size()<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.at(1)<<endl;
    sort(arr.begin(),arr.end());
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    
     return 0;
}
