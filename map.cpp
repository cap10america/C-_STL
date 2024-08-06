<<<<<<< HEAD
// CPP program to illustrate
// Demonstrates begin() and end() 
// map is same as sets 
//it stores unique and sorted  order of keys 
// keys sorted and unique but values can be duplicated 
//time complexity is O(1)
//the worst time complexity is O(n) occurs rearly
#include <iostream>
#include <map>
using namespace std;

int main()
{
	// declaration of map container
	map<char, int> mymap;
	mymap['a'] = 1;
	mymap['b'] = 2;
	mymap['c'] = 3;

	// using begin() to print map
	for (auto it = mymap.begin();
		it != mymap.end(); ++it)
		cout << it->first << " = "<< it->second << '\n';

    map<int ,int >mp;

  map<pair<int ,int>,int>mpi;
    // map<int ,pair<int ,int>>mip;

	return 0;


}
=======
// CPP program to illustrate
// Demonstrates begin() and end() 
// map is same as sets 
//it stores unique and sorted  order of keys 
// keys sorted and unique but values can be duplicated 
//time complexity is O(1)
//the worst time complexity is O(n) occurs rearly
#include <iostream>
#include <map>
using namespace std;

int main()
{
	// declaration of map container
	map<char, int> mymap;
	mymap['a'] = 1;
	mymap['b'] = 2;
	mymap['c'] = 3;

	// using begin() to print map
	for (auto it = mymap.begin();
		it != mymap.end(); ++it)
		cout << it->first << " = "<< it->second << '\n';

    map<int ,int >mp;

  map<pair<int ,int>,int>mpi;
    // map<int ,pair<int ,int>>mip;

	return 0;


}
>>>>>>> 11ec41b655daad2bda059f6b7c2b280332fb7c4f
