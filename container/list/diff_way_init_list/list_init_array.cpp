// C++ program to initialise the List
// and inserting values directly
#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Initialising the List
	// with values
	list<int> li{ 10, 20, 30 };
	
	// Printing the List
	for (int x : li)
		cout << x << " ";

	return 0;
}
