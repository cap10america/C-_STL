#include<bits/stdc++.h>
using namespace std;


int main()
{
 list<int> ls;
    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(2);
    ls.emplace_front(1);
    

    for(auto it:ls)
    {
        cout<<it<<"\t";
    }

    // rest functions are same as the vectors 
    //begin ,end, rbegin ,rend, clear , insert , size ,swap 

return 0;
}