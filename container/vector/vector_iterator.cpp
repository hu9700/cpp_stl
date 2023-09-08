#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
 
    std::cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        std::cout << *i << " ";
 
    std::cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        std::cout << *i << " ";
 
    std::cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        std::cout << *ir << " ";
 
    std::cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        std::cout << *ir << " ";
 
    return 0;
}

/* output
Output of begin and end: 1 2 3 4 5 
Output of cbegin and cend: 1 2 3 4 5 
Output of rbegin and rend: 5 4 3 2 1 
Output of crbegin and crend : 5 4 3 2 1
*/