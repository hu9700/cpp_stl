/*Example
set<int> val; // defining an empty set
set<int> val = {6, 10, 5, 1}; // defining a set with values
*/


// C++ Program to Demonstrate
// the basic working of STL
#include <iostream>
#include <set>

int main()
{
	std::set<char> a;
	a.insert('G');
	a.insert('F');
	a.insert('G');
	for (auto& str : a) {
		std::cout << str << ' ';
	}
	std::cout << '\n';
	return 0;
}

/*
F G 
*/