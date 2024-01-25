/*
You should declare a class Compare and overload operator() function.
When true is returned, 
it means the order is correct and NO swapping of elements takes place
When false is returned, 
it means the order is NOT correct and swapping of elements takes place.

class Compare {
    public:
       bool operator()(T a, T b){
           if(cond){
               return true;
           }
           return false;
      }
};
*/

/*
class Compare {
    public:
       bool operator()(T a, T b){
           if(cond){
               return true;
           }
           return false;
      }
};
*/

// C++ Program to implement
// Custom Comparator in Priority Queue
#include <iostream>
#include <queue>
#define PII pair<int, int>

// Pair of Ints = PII
using namespace std;

// based on first part in ascending and second part in
// descending first basis
class Compare {
public:
	bool operator()(PII below, PII above)
	{
		if (below.first > above.first) {
			return true;
		}
		else if (below.first == above.first
				&& below.second < above.second) {
			return true;
		}

		return false;
	}
};

int main()
{
	priority_queue<PII, vector<PII>, Compare> ds;
	ds.push({ 100, 11 });
	ds.push({ 100, 41 });
	ds.push({ 100, 21 });
	ds.push({ 300, 1 });
	ds.push({ 300, 2 });
	ds.push({ 1, 1 });
	ds.push({ 1, 2 });
	ds.push({ 1, 20 });

	cout << "The priority queue is : \n";
	while (!ds.empty()) {
		cout << ds.top().first << " " << ds.top().second
			<< "\n";
		ds.pop(); // heapify happens
	}

	return 0;
}

/*
The priority queue is : 
1 20
1 2
1 1
100 41
100 21
100 11
300 2
300 1
*/
