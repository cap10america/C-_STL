#include<bits/stdc++.h>
using namespace std;

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
// bool comp(pair<int,int>& p1 ,pair<int,int> &p2)
//  {
//   if (p1.second < p1.second) return true;
//   if (p1.second > p1.second) return false;
// //they are same 
// if(p1.first > p2.first ) return true;
// return false;
//  }


// pair<int,int>a[]={{1,2},{2,1},{4,1}};
// sort( a.begin(),a.end() ,comp);
// //sort(a,a+n);
// //or we can simply custom sorting 
//     cout << "Sorted Vector: "; 
//     for (int num : a) { 
//         cout << a[num] << " "; 
//     } 
//     cout << endl; 
//   return 0;
// }


// sort it according to second element 
// if the second elent is same then  sort 
// it according to the first but in descending 
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second != p2.second) {
        return p1.second< p2.second;
    } else {
        return p1.first > p2.first;
    }
}

int main() {
    vector<pair<int, int>> a = {{1, 2}, {2, 1}, {4, 1}};
    sort(a.begin(), a.end(), comp);

    cout << "Sorted Vector: using comparator ";
    for (const auto p : a) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    // buitin popcount
    // it returns how many ones or set bits in the given number as a in a binary 
    int num =7;
    int cnt=__builtin_popcount(num);
cout<<cnt;
// it returns how many ones or set bits in the given  long long number as a in a binary 
long long lnum =165786578687;
int lcnt =__builtin_popcountll(lnum);
cout<<endl<<lcnt;
cout<<endl;
//TO KNOW THE NEXT PERMUTATIONS IN A GIVEN STRING IS AS FOLLOWS 
  // it should be sorted first 
  string s="123";
  do {
    cout<<s<< endl;

  }while(next_permutation(s.begin(),s.end()));
//we need sort first so we  can get all permutations correctly
 string s1="312";
 sort(s1.begin(),s1.end());
  do {
    cout<<s1<< endl;

  }while(next_permutation(s1.begin(),s1.end()));

  // to return a max element in a array wwe have a function called max_element(start,end)
 int arr[]={10,2,5,8,19,21,22,45,54,75,99,0,1,3};

  int maxi =*max_element(arr,arr+14);


cout<<"the max element is \n"<<maxi<<endl;

  // to return a min element in a array wwe have a function called max_element(start,end)

int min=*min_element(arr,arr+14);
cout<< "the min element in an given array is \n"<< min<< endl;
    return 0;
}