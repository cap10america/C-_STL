#include<bits/stdc++.h>
using namespace std;


int main()
{

 deque<int> dq;
    dq.push_back(3);
    dq.emplace_back(4);
    dq.push_front(2);
    dq.emplace_front(1);

    //extra functions are 
    //pop_back();
    //pop_front();

    dq.pop_back();
   dq.pop_front();
    

cout<<dq.back();
cout<<endl;
cout<<dq.front();
cout<<endl;

    for(auto it:dq)
    {
        cout<<it<<"\t";
    }

    // rest functions are same as the vectors 
    //begin ,end, rbegin ,rend, clear , insert , size ,swap 
    dq.clear();
    
    cout<<dq.empty();




return 0;
}