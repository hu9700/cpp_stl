// C++ program to initialize the List
// using fill function
#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Initialising the list
	list<int> li(3);
	int value = 10;
	fill(li.begin(), li.end(), value);
	
	// Printing theList
	for (int x : li)
		cout << x << " ";

	return 0;
}
