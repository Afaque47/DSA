#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string>m;
    m[1]="I";
    m[13]="Mango";
    m[2]="Love";
    m.insert({7,"Season"});
    for(auto i:m)
    { cout<<i.first<<" -> "<<i.second<<endl; }
    
    m.erase(7);                                         // Erasing an element 
    m.insert({9,"Papaya"});                            // mapping a new entity
    
    cout<<"finding -5 -> "<<m.count(-5)<<endl;       // finding an element
    cout<<"creating an iterator :"<<endl;;
    map<int, string>:: iterator itr;
    for( itr=m.find(9);itr!=m.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    cout<<"without creating an iterator, use auto :"<<endl;;
    
    for(auto i=m.find(2); i!=m.end(); i++)
    {
     cout<<(*i).first<<"-> "<<(*i).second<<endl;
    }

    
}