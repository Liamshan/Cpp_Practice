#include <iostream>
#include <vector>

void selection_sort(std::vector<int> &vect) {
    int little_guy_position;

    for (int i = 0; i < vect.size(); i++) {

        little_guy_position = i;

        for (int j = i + 1; j < vect.size(); j++) {
            if (vect[j] < vect[little_guy_position]) {
                little_guy_position = j;
            }
        }

        // now that we have the littlest guy, we stage and swap
        if (vect[i] != vect[little_guy_position]) {
            int stage = vect[i];
            vect[i] = vect[little_guy_position];
            vect[little_guy_position] = stage;
        }
    }
}

int main() {
    std::vector<int> numbers = {10, 200, 5, 35, 1, 0, 88, 192, 4};
    std::cout << "yo, i can selection sort an array.\n";
    std::cout << "Here is the sorted array: ";

    selection_sort(numbers);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << ", ";
    }

    std::cout << "\n";

    return 0;
    
}











/* Alright, back to back, let's see if we can whip the same thing out a second time, identically. 
next, is bubble sort.
*/