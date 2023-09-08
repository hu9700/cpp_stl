// C++ program to specifying size
// and initializing all values in list
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 4;
	// Create a list of size n with
	// all values as 1.
	list<int> li(n,1);
	
	// Printing the List
	for (int x : li)
		cout << x << " ";

	return 0;
}


/*output
1 1 1 1 
*/