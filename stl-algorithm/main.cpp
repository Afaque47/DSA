#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>        // for accumulate op.
using namespace std;

int main()
{
    vector<int> v(3,7);
    v.push_back(5);
    v.push_back(6);
    v.push_back(13);
    v.push_back(4);
    cout<<"Before sorting: ";
    
    for(auto i:v)
    { cout<<i<<" "; }
    cout<<endl;
   
    sort(v.begin(),v.end());                        // Default sorting is set in increasing order. 
    cout<<"after sorting:  ";
    
    for(auto i:v)
    { cout<<i<<" ";} 
    cout<<endl<<"sorting in decreasing order: ";
    
    sort(v.begin(),v.end(),greater<int>());        // sorting in decreasing order
    
    for(auto i:v)
    { cout<<i<<" ";  }
    cout<<endl<<"after reversing :";

    reverse(v.begin(),v.end());                   // reversing
    for(auto i:v)
    { cout<<i<<" ";  }
  
    cout<<endl<<"Before swapping:"; 
     for(auto i:v)
    { cout<<i<<" ";  }
    swap(v.at(0),v.at(1));                        // swapping
    cout<<endl<<"After swapping :"; 
     for(auto i:v)
    { cout<<i<<" ";  }
    cout<<endl<<"max_element :";                  //max_element in a vector
    cout<<*max_element(v.begin(),v.end());
    cout<<endl<<"min_element :";
    cout<<*min_element(v.begin(),v.end());        //min_element
    cout<<endl<<"summation of vector :";
    cout<<accumulate(v.begin(),v.end(),0);        //accumulate
    cout<<endl<<"Rotate the vector :";
    rotate(v.begin(),v.begin()+2,v.end());        //rotate vector
     for(auto i:v)
    { cout<<i<<" ";  }                            
    cout<<endl<<"count : ";                       // count tells you the occurance of an element in a vector
    v.push_back(0);
    cout<<count(v.begin(),v.end(),0);
    cout<<endl<<"find() :";
    find(v.begin(), v.end(),7) != v.end()?                    // returns an iterator to the first occurance of element
    cout << " Element found" : cout<<" Element not found";   // in a vector and points to the last address if not present.
    cout<<endl;
    sort(v.begin(),v.end());
    for(auto i:v)
    { cout<<i<<" "; }  cout<<endl;
    cout<<"binary_search :"<<binary_search(v.begin(),v.end(),6);  //binary_search
    
    cout<<endl<<"lower_bound :";                                  //lower_bound -> gives index of first occurance of element
    auto p=lower_bound(v.begin(),v.end(),7);
    cout<<p-v.begin()<<endl;
    cout<<"upper_bound :";
    auto q=upper_bound(v.begin(),v.end(),7);                     //upper_bound is (lastPosition +1)
    cout<<q-v.begin();
    cout<<endl;
    v.erase(v.begin());                                             //erase 1st element
     for(auto i:v)
    { cout<<i<<" "; } cout<<endl;
    v.erase(v.begin()+2);                                           //erase 3nd element
     for(auto i:v)
    { cout<<i<<" "; } cout<<endl;
    
    v.pop_back();                                                  //erase last element
    for(auto i:v)
    { cout<<i<<" "; } cout<<endl;
    
    v.erase(v.begin(),v.begin()+3);                               // erase 1st three elements
    for(auto i:v)
    { cout<<i<<" "; } cout<<endl;
     
    auto key=find(v.begin(),v.end(),7);                          // erase key=7; 7 ka iterator find kr lo
    v.erase(key);
    for(auto i:v)
    { cout<<i<<" "; } cout<<endl;    

    vector<int> vec{3,4,5,5,6,6,6,7,8,9};                   // erases the duplicate occurrences in sorted vector in a single line.
    auto key1=unique(vec.begin(),vec.end());                           
    vec.erase(key1,vec.end());
    for(auto i:vec)
    { cout<<i<<" "; } cout<<endl; 
    cout<<"index of max_element :";                                       // very useful while finding the index.             
    cout<< distance( vec.begin(), max_element( vec.begin(),vec.end() )  ); // actually it is index of max element
    
    
}
    
    
    
    
    
    
    
    

    
