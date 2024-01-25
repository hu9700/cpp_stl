/*Put the minum element on the top*/

/*
Syntax:

priority_queue <int, vector<int>, greater<int>> gq;

where,

    ‘int’ 
    is the type of elements you want to store in the priority queue. In this case, it’s an integer.
    
    ‘vector<int>’ 
    is the type of internal container used to store these elements. 
    std::priority_queue is not a container in itself but a container adopter. 
    It wraps other containers. 
    In this example, we’re using a vector, 
    but you could choose a different container that supports front(), push_back(), and pop_back() methods. 
    
    ‘greater<int>‘ 
    is a custom comparison function. 
    This determines how the elements are ordered within the priority queue. 
    In this specific example, greater<int> sets up a min-heap. 
    It means that the smallest element will be at the top of the queue.
*/

// C++ program to demonstrate
// min heap for priority queue
#include <iostream>
#include <queue>
using namespace std;

void showpq(
	priority_queue<int, vector<int>, greater<int> > g)
{
	while (!g.empty()) {
		cout << ' ' << g.top();
		g.pop();
	}
	cout << '\n';
}

void showArray(int* arr, int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

// Driver Code
int main()
{
	int arr[6] = { 10, 2, 4, 8, 6, 9 };
	priority_queue<int, vector<int>, greater<int> > gquiz(
		arr, arr + 6);

	cout << "Array: ";
	showArray(arr, 6);

	cout << "Priority Queue : ";
	showpq(gquiz);

	return 0;
}

/*
Array: 10 2 4 8 6 9 
Priority Queue :  2 4 6 8 9 10
*/
