// C++ program to initialize the List
// from another List
#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Initialising first list
	list<int> li_org{ 10, 20, 30 };
	
	// Initialising the second list
	// from the first list
	list<int> li(li_org.begin(), li_org.end());
	
	// Printing the second List
	for (int x : li)
		cout << x << " ";

	return 0;
}
