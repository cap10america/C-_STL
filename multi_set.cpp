#include<bits/stdc++.h>
using namespace std;
int main()
{

    //set is a non linear data structurs .i.e sorted  and can have multiple duplicates 
    //every operation takes log(n )time complexity
    multiset<int>ms8;
    ms8.insert(4);        //{4}
    ms8.insert(8);        //{4,8}
     ms8.insert(3);      //{3,4,8}
      ms8.insert(6);      //{3,4,6,8}  
       ms8.insert(1);       //{1,3,4,6,8}  
        ms8.insert(7);        //{1,3,4,6,7,8}  
         ms8.insert(9);        //{1,3,4,6,7,8,9}  
          ms8.insert(5);        //{1,3,4,5,6,7,8,9} 
          ms8.emplace(10);        //{1,3,4,5,6,7,8,9,10} 
        ms8.emplace(5);           //{1,3,4,5,5,6,7,8,9,10}
           ms8.insert(2);           //{1,2,3,4,5,5,6,7,8,9,10} 
          ms8.insert(1);            //{1,1,2,3,4,5,5,6,7,8,9,10} 
for (auto it:ms8)
{
    cout<<it<<" ";

}cout<<endl;
cout<<ms8.count(1)<<endl;
cout<<ms8.count(5)<<endl;
ms8.erase(1);   //it removes all the elements 
// so to remove elements we range erase with iterator (pointing specified memory address ) 
//  ms8.erase(ms8.find(5),ms8.find(5)+1);
//          // ms8.insert(1);            //{1,1,2,3,4,5,5,6,7,8,9,10} 
for (auto it:ms8)
{
    cout<<it<<" ";

}cout<<endl;
return 0;
}