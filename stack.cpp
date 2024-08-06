#include<bits/stdc++.h>
using namespace std;
int main()
{
    // the stack data structure 
    //it follows the " LIFO ( Last In First Out ) "
    // the time complexity of these operations in stck have O(1)
    //constant of time

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.emplace(8);
    cout<<st.top();
         cout<<endl;
    cout<<st.size();
    cout<<endl;
    stack<int> st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);
    st1.push(6);
    st1.push(7);
    st1.emplace(8);
    st1.emplace(9);
    st1.emplace(10);
        cout<<st1.top();
        cout<<endl;
    cout<<st1.size();
    cout<<endl;
st.swap(st1);
cout<<st.top();
         cout<<endl;
                 cout<<st1.top();
                 while(!st.empty())
                 {
                    cout<<st.top()<<"\t";
                    st.pop();
                 }


return 0;



}