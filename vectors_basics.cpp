#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vectors declaration and initialization 
    vector<int>v;
    v.push_back(8);          //it inserts a element  8 at the zero index of variable v
    v.emplace_back(3);        //it inserts a element  3 at the first index of variable v
  
    //vector with pair data type 
    vector<pair<int ,int>>vec;
    vec.push_back({1,2});          //it inserts a elements pair of 1,2  at the  of variable vec   ->    note it requires the the curly braces "{  }" in it 

    vec.emplace_back(3,4);        //it inserts a elements pair  3, 4  to variable vec    ->  note it requires the the curly braces "{  }" in it 
    

    //vector with 5 repeated values with 100 as a  value 
     vector<int > a(5,100);

     //vector with  5 repeated values with default  value of zeroes or garbage value depending on the compiler
         vector<int > b(5);


     //vector with 5 repeated values with 20 as a  value
         vector<int>v1(5,20);

    //duplication of vectors or copy of vector 
    //vector with 5 repeated values with 20 as a  value
         vector<int>v2(v1);
    // how to access the elements of vectors  it is as same as arrays 
    cout<<endl;
      cout<<v[0];
     cout<<endl;
      cout<<v[1];
       cout<<endl;
    cout<<v1[1];
    cout<<endl;
      cout<<v2[1];
      cout<<endl;

    
    // altternate methods

    // iterators 
    // iterators simply points to the memory address of values bcoz we know that vector values are stored in the random address locations of memory so itrartors are used to point to the memory address  
    //  syntax for the vector iterator is as follows  below 
    //  vector<int >::iterator iterator_variable = v.begin();
    
    //v.begin() its an iterator function to POINT the memory addresss of first element in the vector
   
    //we similar other functions too they are
    // v.end();     its an iterator function to POINT the memory addresss of right after the last  element in the vector
    // v.rend();      its an reverse of end iterator function to POINT the memory addresss of right before  the first   element in the vector
    // v.rbegin();      its an reverse of end iterator function to POINT the memory addresss of right before  the first   element in the vector
    
    //  it++;
    //  cout<< * (it)<<" ";
    //and   v.back()   -->  points the last indexed element of a vecter

// iterate a vector 
//itrator means simly the memory address of the element

 vector<int >::iterator it = a.begin();
     it++;
     cout<< * (it)<<" ";
     it =it+2;
     cout<< * (it)<<" ";
       it = b.begin();
     it++;
     cout<< * (it)<<" ";
     it =it+2;
     cout<< * (it)<<" ";
   cout<<a.back();
   cout<<endl;

   //  if the elements in a vector are more we can't  do  this all the time bcoz its time consuming so we a concept which is called "loop in iterators  "

   //  loops using for 
   //-------   syntax  --------
  //  for vector<int>::it =v.begin();it!=v.end();it++;
  //  FOR DISPLAYING IT WE USE "*"  ----> *(it)
  //  cout<<*(it);


  for ( it =v1.begin();it!=v1.end();it++)
  {
    cout<<*(it)<<"\t";
  }
     cout<<endl;


// alternate method for for without using iterator declaration to the vector is 
  // for ( auto  it =v.begin();it!=v.end();it++)   
for ( auto  it =v.begin();it!=v.end();it++)   
 {
  cout<<*(it)<<"\t";
   }    cout<<endl;
   for ( auto  it =v2.begin();it!=v2.end();it++)   
   {
    cout<<*(it)<<"\t";;

   }    cout<<endl;
   for ( auto  it =v.begin();it!=v.end();it++)   
 {
  cout<<*(it)<<"\t";
 }   cout<<endl;

//for each loop 
//syntax
//  for(auto it:v)
// {
//   cout<<it;
// }

// auto knows the datatype automatically no need to declare its data type
//example  : int a=10 can be written as auto a=5;

 for(auto it:v2)
{
  cout<<it<<"\t";
}
    cout<<endl;
    for(auto it:b)
{
  cout<<it<<"\t";
}
    cout<<endl;
    for(auto it:a)
{
  cout<<it<<"\t";
}
    cout<<endl;

    // creating  in vector
    vector<int> c;
     c.emplace_back(10);
    c.emplace_back(11);
   c.emplace_back(12);
    c.emplace_back(13);
     c.emplace_back(14);
      c.emplace_back(15);
      cout<<"all the elements of vector  c are";
        cout<<endl;
    for (auto it :c)
    {
      cout<<it <<"\t";
    }
    cout<<endl;

    // for deletion in vector
    // v.erase( iterator )  -->  to erase the elements in the vector using the memory address pointing the 
//v.erase(v.begin())   -->to delete the specified (first ) memory address of the element of a given vector
//v.erase(v.begin()+1)   -->to delete the specified (second ) memory address of the element of a given vector
//v.erase(v.begin()+2)   -->to delete the specified (third  ) memory address of the element of a given vector
//v.erase(v.back())   -->to delete the specified (last  ) memory address of the element of a given vector


//v.erase(start,end) --> starting included and ending is excluded 
//v.erase([start,end))


c.erase(c.begin());
cout<<"all the elements of vector  c after  performing deletion operation on first element are";
  cout<<endl;
for (auto it :c)
    {
      cout<<it <<"\t";
    }
  cout<<endl;

c.erase(c.begin()+1);
cout<<"all the elements of vector  c after  performing deletion operation on second element  are";
  cout<<endl;
for (auto it :c)
    {
      cout<<it <<"\t";
    }
  cout<<endl;
  c.erase(c.end()-1);
cout<<"all the elements of vector  c after  performing deletion operationat on last element  are";
  cout<<endl;
for (auto it :c)
    {
      cout<<it <<"\t";
    }
  cout<<endl;
  c.emplace_back(16);
    c.emplace_back(17);
   c.emplace_back(18);
    c.emplace_back(19);
     c.emplace_back(20);
      c.emplace_back(21);
cout<<"the elements after again inserted"<<endl;
for (auto it :c)
    {
      cout<<it <<"\t";
    }
  cout<<endl;
c.erase(c.begin()+1,c.end()-1);
cout<<"the elements after again deleted from index 2 -7"<<endl;
for (auto it :c)
    {
      cout<<it <<"\t";
    }
  cout<<endl;

  // insertion of the elements using insert functions 
  //syntax  for the insert function using begin (),end() functions
  //vector<int>v(2,100);
  //v.insert(place ,value);
  //example --> v.insert(begin(),300);
  //v.insert(place,times_of repetation,value to be repeated);
  c.insert(c.begin()+1,12);
  c.insert(c.begin()+2,2,14);
   c.insert(c.begin()+3,15);
    c.insert(c.begin()+4,16);
    c.insert(c.end(),23);
cout<<"the elements after again inserted by using the insert method"<<endl;
for (auto it :c)
    {
      cout<<it <<"\t";
    }

  cout<<endl;

  //the functions that are used in vectors are 

// v.size();    --> it returns the length of the vector 
// v.pop_back(); --> it delete the last element from the vector
// v1.swap(v2); it swaps the contents of one vector from the another
// v.clear();it clear or deletes the entire vectors
// cout<<v.empty(); it returns if its true or false


cout<<c.size();
  cout<<endl;
c.pop_back();
  for (auto it :c)
    {
      cout<<it <<"\t";
    }
      cout<<endl;
c.swap(v2);
  for (auto it :c)
    {
      cout<<it <<"\t";
    }
  cout<<endl;
cout<<c.empty();


  cout<<endl;
  cout<<v2.empty();


   cout<<endl;
 cout<<a.empty(); //  it return '1' if its true otherwise returns '0'


  cout<<endl;

  for (auto it :c)
    {
      cout<<it <<"\t";
    }

  cout<<endl;

c.clear();
  for (auto it :c)
    {
      cout<<it <<"\t";
    }
    return 0;
}