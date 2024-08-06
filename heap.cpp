<<<<<<< HEAD
//priority_queue is also called as maxheap(if the storing order ascending order which means the lower priority less weight num is at first and max num at top most )
// heap is non linear datastructures which is more similar to tree data structure
// the time complexity for push and pop opeeration is logn
//the time complexity for top() operation is O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
//by defaultpriority_queue is max heap i.e max weight num lies at top 
 priority_queue<int> pq;
pq.push(9);
pq.push(2);
pq.emplace(8);
pq.emplace(11);
cout <<pq.top();
cout<<endl;
while(!pq.empty())
{
    cout<<"\t"<<pq.top();
    pq.pop();

}
cout<<endl;

priority_queue<int> p1;
p1.push(35);              // inserting element in a queue
p1.push(40);
p1.push(95);
while (!p1.empty())
{
cout <<"\t" << p1.top();  //printing elements of queue
p1.pop();
}
cout<<endl;

//the min heap syntax and application 

priority_queue<int ,vector<int>,greater<int>> mpq;

mpq.push(9);
mpq.push(2);
mpq.emplace(8);
mpq.emplace(11);
cout <<mpq.top();
cout<<endl;
while(!mpq.empty())
{
    cout<<"\t"<<mpq.top();
    mpq.pop();

}
cout<<endl;
return 0;
 
}

=======
//priority_queue is also called as maxheap(if the storing order ascending order which means the lower priority less weight num is at first and max num at top most )
// heap is non linear datastructures which is more similar to tree data structure
// the time complexity for push and pop opeeration is logn
//the time complexity for top() operation is O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
//by defaultpriority_queue is max heap i.e max weight num lies at top 
 priority_queue<int> pq;
pq.push(9);
pq.push(2);
pq.emplace(8);
pq.emplace(11);
cout <<pq.top();
cout<<endl;
while(!pq.empty())
{
    cout<<"\t"<<pq.top();
    pq.pop();

}
cout<<endl;

priority_queue<int> p1;
p1.push(35);              // inserting element in a queue
p1.push(40);
p1.push(95);
while (!p1.empty())
{
cout <<"\t" << p1.top();  //printing elements of queue
p1.pop();
}
cout<<endl;

//the min heap syntax and application 

priority_queue<int ,vector<int>,greater<int>> mpq;

mpq.push(9);
mpq.push(2);
mpq.emplace(8);
mpq.emplace(11);
cout <<mpq.top();
cout<<endl;
while(!mpq.empty())
{
    cout<<"\t"<<mpq.top();
    mpq.pop();

}
cout<<endl;
return 0;
 
}

>>>>>>> 11ec41b655daad2bda059f6b7c2b280332fb7c4f
