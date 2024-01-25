/*
Example 2: 
Declaring a set of pairs with a comparator 
that keeps the set sorted 
on the basis of the difference between the first and second elements of the pair.
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
		int diff1 = p1.first - p1.second;
		int diff2 = p2.first - p2.second;
		return diff1 < diff2;
	}
};

int main()
{
	// Declaring a set of pairs with comparator
	set<pair<int, int>, comp> s;

	// Adding pairs into the set
	s.insert({ 4, 3 });
	s.insert({ 5, 2 });
	s.insert({ 6, 4 });
	s.insert({ 7, 3 });

	for (auto i = s.begin(); i != s.end(); i++) {
		cout << i->first << " " << i->second << endl;
	}

	return 0;
}

/*
4 3
6 4
5 2
7 3
*/