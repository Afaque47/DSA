#include<iostream>
#include<deque>
using namespace std;
int main ()
{
    deque<int> d(3,-7);
    d.pop_front();
    d.push_front(1);
    d.push_back(9);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"front: "<<d.front()<<endl;
    cout<<"back:  "<<d.back()<<endl;
    cout<<"at 1:  "<<d.at(1)<<endl;
    cout<<"empty: "<<d.empty()<<endl;
    cout<<"size:  "<<d.size()<<endl;
    
    d.clear();

    d.push_back(13);
    d.push_back(14);
    d.push_back(15);
    d.push_front(12);                    // {12,13,14,15}
   
    d.erase(d.begin(),d.begin()+2);     //  12 aur 13 ko nikaal diye 
    
    deque<int> deq(d);                  // deq ke ander d ko daal diye
    deq.pop_back();                       // 15 ko nikaal diye
    
    for(int i:deq)
    {
        cout<<i<<" ";                   // print 14
    }
    
    
    
}
