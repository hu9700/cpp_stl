// CPP program to illustrate
// Implementation of swap() function

/*
Swap() function is used to swap the contents of one priority queue 
with another priority queue of same type and same or different size.
*/

#include <bits/stdc++.h>
using namespace std;

// Print elements of priority queue
void print(priority_queue<int> pq)
{
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
}

int main()
{
	// priority_queue container declaration
	priority_queue<int> pq1;
	priority_queue<int> pq2;

	// pushing elements into the 1st priority queue
	pq1.push(1);
	pq1.push(2);
	pq1.push(3);
	pq1.push(4);

	// pushing elements into the 2nd priority queue
	pq2.push(3);
	pq2.push(5);
	pq2.push(7);
	pq2.push(9);

	cout << "Before swapping:-" << endl;
	cout << "Priority Queue 1 = ";
	print(pq1);
	cout << "Priority Queue 2 = ";
	print(pq2);

	// using swap() function to swap elements of priority
	// queues
	pq1.swap(pq2);

	cout << endl << "After swapping:-" << endl;
	cout << "Priority Queue 1 = ";
	print(pq1);
	cout << "Priority Queue 2 = ";
	print(pq2);
	return 0;
}

// This code is contributed by Susobhan Akhuli

/*
Before swapping:-
Priority Queue 1 = 4 3 2 1 
Priority Queue 2 = 9 7 5 3 

After swapping:-
Priority Queue 1 = 9 7 5 3 
Priority Queue 2 = 4 3 2 1 
*/