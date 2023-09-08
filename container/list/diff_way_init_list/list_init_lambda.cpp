#include <iostream>
#include <list>
#include <algorithm>

int main() {
	std::list<int> myList(5);
	int value = 1;
	std::generate(myList.begin(), myList.end(), [&value]() { return value++; });

	// Print the contents of the list
	for (const auto& element : myList) {
		std::cout << element << " ";
	}
	std::cout << std::endl;

	return 0;
}


/* output
1 2 3 4 5
*/