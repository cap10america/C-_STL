<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{

    //Unordered set is a non linear data structurs .i.e un sorted and unique
    //every operation takes O (n )time complexity
    // but in worest time complexity O(1)
    //its not in sorted set 
    //  the functions of sets  are same as sets
//  begin()
//  end()
//  rbegin()
//  rend()
//  size()
//  empty()
//  swap()

    unordered_set<int>us8;
    us8.insert(4);        //{4}
    us8.insert(8);        //{4,8}
     us8.insert(3);      //{3,4,8}
      us8.insert(6);      //{3,4,6,8}  
       us8.insert(1);       //{1,3,4,6,8}  
        us8.insert(7);        //{1,3,4,6,7,8}  
         us8.insert(9);        //{1,3,4,6,7,8,9}  
          us8.insert(5);        //{1,3,4,5,6,7,8,9} 
          us8.emplace(10);        //{1,3,4,5,6,7,8,9,10} 
        us8.emplace(5);           //{1,3,4,5,6,7,8,9,10}
           us8.insert(2);           //{1,2,3,4,5,6,7,8,9,10} 
          us8.insert(1);          //{1,2,3,4,5,6,7,8,9,10}
for(auto it :us8)
{
    cout<<it<<"\t";       //{1,2,3,4,5,6,7,8,9,10} 
    it++;

}  cout<<endl;
return 0;
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{

    //Unordered set is a non linear data structurs .i.e un sorted and unique
    //every operation takes O (n )time complexity
    // but in worest time complexity O(1)
    //its not in sorted set 
    //  the functions of sets  are same as sets
//  begin()
//  end()
//  rbegin()
//  rend()
//  size()
//  empty()
//  swap()

    unordered_set<int>us8;
    us8.insert(4);        //{4}
    us8.insert(8);        //{4,8}
     us8.insert(3);      //{3,4,8}
      us8.insert(6);      //{3,4,6,8}  
       us8.insert(1);       //{1,3,4,6,8}  
        us8.insert(7);        //{1,3,4,6,7,8}  
         us8.insert(9);        //{1,3,4,6,7,8,9}  
          us8.insert(5);        //{1,3,4,5,6,7,8,9} 
          us8.emplace(10);        //{1,3,4,5,6,7,8,9,10} 
        us8.emplace(5);           //{1,3,4,5,6,7,8,9,10}
           us8.insert(2);           //{1,2,3,4,5,6,7,8,9,10} 
          us8.insert(1);          //{1,2,3,4,5,6,7,8,9,10}
for(auto it :us8)
{
    cout<<it<<"\t";       //{1,2,3,4,5,6,7,8,9,10} 
    it++;

}  cout<<endl;
return 0;
>>>>>>> 11ec41b655daad2bda059f6b7c2b280332fb7c4f
}