#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.pop();
    cout<<"top:"<<s.top()<<endl;
    
    stack<string>st;
    st.push("I");
    st.push("love");
    st.push("India");
    cout<<"Empty or not:"<<st.empty()<<endl;
    cout<<"size:"<<st.size()<<endl;
    st.pop();
    cout<<"top:"<<st.top()<<endl;
    
    stack<string>sta(st);
    sta.pop();
    cout<<"top:"<<sta.top();
   

    return 0;
}
