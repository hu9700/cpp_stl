// C++ program to initialize the List
// from vector
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vect{ 10, 20, 30 };

	list<int> li(vect.begin(), vect.end());
	
	// Printing the List
	for (int x : li)
		cout << x << " ";

	return 0;
}
