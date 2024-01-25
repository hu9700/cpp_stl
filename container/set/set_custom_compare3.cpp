/*
Example 3: 
Given a set of pairs 
with the pair’s first element as the char 
and 2nd element as the rank of the character 
declare a custom comparator 
that stores the order as descending order of rank 
if the race between the same first element occurs.
*/

// C++ Program to Declare
// Comparator For Set Of Pair
#include <bits/stdc++.h>

using namespace std;

// Declaring a custom comparator
struct comp {
	// Operator() overloading
	bool operator()(const pair<char, int>& p1,
					const pair<char, int>& p2)
	{
		// new definition
		if (p1.first == p2.first) {
			return p1.second > p2.second;
		}
		return p1.first < p2.first;
	}
};

int main()
{
	// Declaring a set of pairs with comparator
	set<pair<char, int>, comp> s;

	// Adding pairs into the set
	s.insert({ 'a', 3 });
	s.insert({ 'c', 2 });
	s.insert({ 'c', 4 });
	s.insert({ 'c', 5 });
	s.insert({ 'b', 4 });
	s.insert({ 'b', 3 });

	for (auto i = s.begin(); i != s.end(); i++) {
		cout << i->first << " " << i->second << endl;
	}

	return 0;
}
