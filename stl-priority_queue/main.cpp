#include <iostream>
#include <queue>
using namespace std;

int main()
{   // max heap
    priority_queue<int> max;
    // min heap
    priority_queue< int, vector<int>, greater<int>  > min;
    max.push(1);
    max.push(7);
    max.push(2);
    int n= max.size();
    for(int i=0; i<n; i++)
    {
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;
    min.push(-1);
    min.push(0);
    min.push(-2);
    min.push(1);
    int m=min.size();
    for(int i=0;i<m;i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<endl;
    priority_queue<string> pq;
    pq.push("Aeroplane");                 //first alphabet are converted to integer and then alphabet containing greatest       
    pq.push("Cat");                      // integer are printed.
    pq.push("Boo");
    cout<<pq.top();
    
    return 0;
}