#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a{1,2,3};                   // find the sum of two arrays 
    vector<int> b{4,5};
    int n=a.size(), m=b.size();
   
    int  sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    { sum1=10*sum1 + a[i]; }
    for(int i=0;i<m;i++)
    { sum2=10*sum2 + b[i]; }
    int sum3=sum1+sum2;
    
    deque<int>v;

    while(sum3)
    {
       int ans=sum3 % 10;
       v.push_front(ans); 
       sum3=sum3/10;
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
 return 0;
}
