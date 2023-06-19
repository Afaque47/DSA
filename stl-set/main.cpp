#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(8);
    s.insert(7);
    s.insert(6);
    s.insert(7);
    s.insert(9);
    
    for(auto i:s)
    {
        cout<<i<<" ";    }   
    cout<<endl;
    
    cout<<"1 is present or not:"<<s.count(1)<<endl;     //to search a no. is present or not;
    
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);                                       // to erase
    for(auto i:s)
    {
        cout<<i<<" ";
    } cout<<endl;
   
    set<int>::iterator itr=s.find(8);                  // 8 aur 8 ke aage jo hoga sab print hoga

    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    } cout<<endl;
    
    set<int, greater<int> > se;                       // for storing in descending order    
    se.insert(8);
    se.insert(7);
    se.insert(6);
    se.insert(7);
    se.insert(9);
    
    for(auto i:se)
    {
        cout<<i<<" ";
    }  cout<<endl;
    
    

    return 0;
}
