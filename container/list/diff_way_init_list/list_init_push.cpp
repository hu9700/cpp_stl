// C++ program to create an empty List
// and push values one by one.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Create an empty List
	list<int> li;

	// Adding values to the List
	li.push_back(10);
	li.push_back(20);
	li.push_back(30);
	
	
	// Printing the List
	for (int x : li)
		cout << x << " ";

	return 0;
}
