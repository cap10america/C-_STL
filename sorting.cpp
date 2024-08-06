#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ascending order ny default 
    //sort (a,a+n); or if case its a vector sort(v.begin(),v.end())

    // start included and end not included
   //or we have to sort onl subpart then 
   //sort(a+3,a+5);
   
   // if we want to sort in descending order 
//    then we use a comparirator comp()  or greater<int>
// sort(a,a+n,greater<int>);
 //or we have to sort onl subpart then 
   //sort(a+3,a+5,greater<int>);
//    if we have to sort it i  #my_way
// then we use  comp()
pair<int,int>a[]={{1,2},{2,1},{4,1}};
auto it=sort(a,a+3);
for (it:a)
{cout<<it.first<<"\t"<<it.second;;
}

    return 0;
}