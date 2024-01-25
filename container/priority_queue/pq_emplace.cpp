// CPP program to illustrate
// Implementation of emplace() function

/*
Emplace() function is used to insert a new element into the priority queue container, 
the new element is added to the priority queue according to its priority. 

It is similar to push operation. 
The difference is that emplace() operation saves unnecessary copy of the object.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	priority_queue<int> pq;
	pq.emplace(1);
	pq.emplace(2);
	pq.emplace(3);
	pq.emplace(4);
	pq.emplace(5);
	pq.emplace(6);
	// Priority queue becomes 1, 2, 3, 4, 5, 6

	// Printing the priority queue
	cout << "Priority Queue = ";
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}

	return 0;
}

// This code is contributed by Susobhan Akhuli
/*
Priority Queue = 6 5 4 3 2 1 
*/

