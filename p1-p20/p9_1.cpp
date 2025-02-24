#include <iostream>
#include <vector>

void selec_sort(std::vector<int> &vect) { //I guess we don't need a return value
    int smallest_position;

    for (int i = 0; i < vect.size(); i++) {
        smallest_position = i;

        for (int j = i + 1; j < vect.size(); j++) {
            if (vect[j] < vect[smallest_position]) {
                smallest_position = j;
            }
        }
        // Swap the found minimum element with the element at inex 'i'
        if (smallest_position != i) {
            int staging = vect[smallest_position];
            vect[smallest_position] = vect[i];
            vect[i] = staging;
        }
    }
}

int main() {
    std::vector<int> numbers = {7, 2, 5, 4, 1, 6, 0, 3};

    std::cout << "Yo, I can sort your given array\n";
    std::cout << "The sorted array is:   ";

    selec_sort(numbers);   // no need for new vector, just update existing vector.

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << ", ";     // Just print each value of the newly sorted vector
    }

    return 0;
}
