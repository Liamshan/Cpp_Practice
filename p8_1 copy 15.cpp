// Corrected Binary Search

#include <iostream>
#include <vector>

std::vector<int> numbers = {1, 5, 10, 20, 50, 100, 500};

std::string bin_search(const int &n) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left <= right) {
        int midpoint = left + (right - left) / 2;
        //std::cout << "left: " << left << "   right: " << right << "   midpoint: " << midpoint << "\n\n\n";      //check just to see how it divides

        if (numbers[midpoint] == n) {
            return "contains ";
        } else if (n < numbers[midpoint]) {
            right = midpoint - 1;
        } else {
            left = midpoint + 1;
        }
    }
    return "does not contain ";

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
the corrected steps are to set some upper and lower boundaries, then move either
the upper or lower to the center depending on if the number is higher or lower than
the midpoint

also, i knew there was, but couldnt think of an equation to identify the best
midpoint.  midpoint = left + (right - left) /2
but i was close. 

it's also important to note the while loop's exit condition, at some point 
left will nolonger be <= right.
*/