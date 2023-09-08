// C++ program to initialize the List
// from array
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 10, 20, 30 };
	int n = sizeof(arr) / sizeof(arr[0]);

	list<int> li(arr, arr + n);
	
	// Printing the List
	for (int x : li)
		cout << x << " ";

	return 0;
}
