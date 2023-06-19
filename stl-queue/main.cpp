#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    cout<<q.front()<<endl;
    
    queue<int> qu(q);
    qu.pop();
    cout<<qu.front()<<endl;
    
    queue<string> queue;
    queue.push("I");
    queue.push("Love");
    queue.push("Gaming");
    queue.pop();
    cout<<queue.front()<<endl;
    queue.pop();
    cout<<queue.front()<<endl;
    cout<<queue.empty()<<endl;
    cout<<queue.size()<<endl;
    
    

    

    return 0;
}