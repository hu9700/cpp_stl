/*
Almost same as priority queue

Syntax:

set<pair<data_type_1, data_type_2>, comparator> set_name

Comparator:

struct comparator {
    // operator() overloading
    bool operator() (const pair<int,int> &p1, const pair<int,int> &p2){
       // custom definition code 
    }
};

*/


/*
Example 1: 
Declaring a set of pairs with a comparator 
that keeps the set sorted on the 2nd element of the pair.
*/

// C++ Program to Declare
// Comparator For Set Of Pair
#include <bits/stdc++.h>

using namespace std;

// Declaring a custom comparator
struct comp {
	// Operator() overloading
	bool operator()(const pair<int, int>& p1,
					const pair<int, int>& p2)
	{
		// new definition
		return p1.second - p2.second;
	}
};

int main()
{
	// Declaring a set of pairs with comparator
	set<pair<int, int>, comp> s;

	// Adding pairs into the set
	s.insert({ 4, 3 });
	s.insert({ 5, 2 });
	s.insert({ 6, 1 });
	s.insert({ 7, 0 });

	for (auto i = s.begin(); i != s.end(); i++) {
		cout << i->first << " " << i->second << endl;
	}

	return 0;
}

/*
7 0
6 1
5 2
4 3
*/
