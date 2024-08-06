#include<bits/stdc++.h>
using namespace std ;
int main()
{
    //queue datastructure
    //it follows the " FIFO ( First In First Out  )  principle "
    // syntax  --> 
    // queue<int >q;
    // q.push(1);
    //     q.push(2);
    //     q.emplace(4);

    //     q.back()+=5;
    //     cout<<q.back();
    //     cout<<endl;
    //     cout<<q.front();
    //     q.pop();
    //     cout<<q.front();

 
    queue<int >q;
    q.push(1);
        q.push(2);
        q.emplace(4);

        q.back()+=5;
        cout<<q.back();
        cout<<endl;
        cout<<q.front();
        q.pop();
        cout<<q.front();



}