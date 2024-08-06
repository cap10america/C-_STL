#include<bits/stdc++.h>
using namespace std;
int main()
{

    //set is a non linear data structurs .i.e sorted and unique
    //every operation takes log(n )time complexity
    set<int>s8;
    s8.insert(4);        //{4}
    s8.insert(8);        //{4,8}
     s8.insert(3);      //{3,4,8}
      s8.insert(6);      //{3,4,6,8}  
       s8.insert(1);       //{1,3,4,6,8}  
        s8.insert(7);        //{1,3,4,6,7,8}  
         s8.insert(9);        //{1,3,4,6,7,8,9}  
          s8.insert(5);        //{1,3,4,5,6,7,8,9} 
          s8.emplace(10);        //{1,3,4,5,6,7,8,9,10} 
        s8.emplace(5);           //{1,3,4,5,6,7,8,9,10}
           s8.insert(2);           //{1,2,3,4,5,6,7,8,9,10} 
          s8.insert(1);          //{1,2,3,4,5,6,7,8,9,10}
for(auto it :s8)
{
    cout<<it<<"\t";       //{1,2,3,4,5,6,7,8,9,10} 
    it++;

}  cout<<endl;
        auto it=s8.find(7);
        cout<<*(it);
        cout<<endl;
        

                it=s8.find(5);
                   cout<<*(it);
        cout<<endl;
        s8.erase(5);
       
cout<<s8.count(8);
 cout<<endl;
cout<<s8.count(5);
 cout<<endl;
 auto iit =s8.count(15);
  cout<<iit;
 cout<<endl;

for(auto it :s8)
{
    cout<<it<<"\t";       //{1,2,3,4,5,6,7,8,9,10} 
    it++;

}  cout<<endl;
 

 // the functions of sets  are same as vectors
//  begin()
//  end()
//  rbegin()
//  rend()
//  size()
//  empty()
//  swap()

 s8.erase(s8.find(4),s8.end());
 for(auto it :s8)
{
    cout<<it<<"\t";       //{1,2,3,4,5,6,7,8,9,10} 
    it++;

}cout<<"\nthe set after removing the elements from 4 to 10";  
cout<<endl;

 auto lit =s8.lower_bound(0) ;
cout<<iit;
cout<<endl;
 lit =s8.upper_bound(2);
cout<<iit;
cout<<endl;

}