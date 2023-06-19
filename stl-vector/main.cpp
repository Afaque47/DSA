#include <iostream>
#include<vector>
using namespace std;

int main()
{   
    vector<int> v(3,-1);
    v.pop_back();                // pop the last element
    v.pop_back();

    v.push_back(1);             // push the element in the end of a vector
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<"capacity-> " <<v.capacity()<<endl;
    cout<<"empty-> "    <<v.empty()<<endl;
    cout<<"size-> "     <<v.size()<<endl;
    cout<<"front-> "    <<v.front()<<endl;
    cout<<"back-> "     <<v.back()<<endl;
    cout<<"at -> "      <<v.at(1)<<endl;
   
    v.clear();
    v.push_back(3);
    cout<<"printing after clear"<<endl;
     for(int i:v)
    {
        cout<<i<<" "<<endl;

    }
    cout<<"capacity-> "<<v.capacity()<<endl;        //  after clearing capacity remained same as earlier.
    
    vector<int> vec(v);                             //  putting a vector into a new vector
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    
   return 0;
}
