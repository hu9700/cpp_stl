/*
By default, the std::set is sorted in ascending order.
However, we have the option to change the sorting order by using the following syntax.

std::set <data_type, greater<data_type>> set_name;
*/

// C++ program to demonstrate the creation of descending
// order set container
#include <iostream>
#include <set>
using namespace std;

int main()
{

	set<int, greater<int> > s1;
	s1.insert(10);
	s1.insert(5);
	s1.insert(12);
	s1.insert(4);

	for (auto i : s1) {
		cout << i << ' ';
	}
	return 0;
}

/*
12 10 5 4 
*/