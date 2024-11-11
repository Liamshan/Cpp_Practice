// This is an incorrect attempt at binary search

#include <iostream>
#include <vector>

std::vector<int> numbers = {1, 5, 10, 20, 50, 100, 500};

std::string bin_search(const int &n) {
    int midpoint = numbers.size()/2;
    bool contains = false;

    for (int i = 0; i < 5; i++) {
        if (n == midpoint + 1) {
            contains = true;
            return "contains ";
        } else if (n < midpoint + 1) {
            midpoint = midpoint/2;
        } else {
            midpoint = midpoint + midpoint/2;  //This will only work once. 
        }
    }
    if (contains != true) {
        return "does not contain ";
    }
    return "error of some kind";
}

int main() {
    int n;
    std::cout << "yo, I can binary search your number. \n";
    
    while (true) {
        std::cout << "Give me a number: ";
        std::cin >> n;
        
        std::cout << "The vector " << bin_search(n) << n << "\n";
    }
    
}



/* Oblective 2: Implement binary search

Alright, the goal for implementing binary search is to somehow take
the same assorted array of numbers but first sort them. so first, let's implement
binary search on a pre-sorted array. so like, we'll make the same array, then somehow
we start in the middle, if the number n is larger or smaller, we check the number
to the left or right of the middle. so we will need
vector.size/2 and then check that spot. as it adds to that vector

Step 1. get vector (sorted)
2. init int of midpoint = vector.size()/2
3. check that mid position
4. if not == n 
    if n smaller >> midpoint = midpoint/2
    if n larger >> midpoint = midpoint + midpoint/2
5. if == n return true
6. if midpoint = 1 return false  (you've run out of positions to check)
*/