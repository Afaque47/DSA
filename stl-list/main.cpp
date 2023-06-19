#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> l(3,-7);
    l.pop_back();
    l.push_back(1);
    l.pop_front();
    l.push_front(0);
    
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"empty or not:"<<l.empty()<<endl;
    cout<<"size:"<<l.size()<<endl;
    cout<<"front:"<<l.front()<<endl;
    cout<<"back:"<<l.back()<<endl;
   // cout<<"at 1"<<l.at(1)<<endl;                       //direct access is not possible
    l.clear();
    list<int> li(l);
    li.push_back(-1);
    li.push_back(-2);
    li.erase(li.begin());
    for(int i:li)
    {
        cout<<i<<" ";
    }
    
    
    

    return 0;
}