#include <iostream>
#include <vector>

void select_sort(std::vector<int> &vect){
    int littlest_guy_position;   
    for (int i = 0; i < vect.size(); i++) {
        littlest_guy_position = i; // would be out of scope if initialized in here

        for (int j = i + 1; j < vect.size(); j++) {
            if (vect[j] < vect[littlest_guy_position]) {  // which is 'i' initially
                littlest_guy_position = j;  // you want just position, not value
            }
        }
        // Now time to stage and swap littlest_position
        // 1. stage position i (if not already same)
        // 2. put littlest_guy_position value into i
        // 3. put stage into littlest_guy_position
        if (vect[i] != vect[littlest_guy_position]) {
            int stage_value = vect[i];
            vect[i] = vect[littlest_guy_position];
            vect[littlest_guy_position] = stage_value;
        }
    }
}

int main() {
    std::vector<int> numbers = {7, 2, 5, 4, 1, 6, 0, 3};
    std::cout << "sup buddy, I can sort this vector, no problem.\n";
    std::cout << "Here is the sorted vector: ";

    select_sort(numbers);

    // Now let's print the sorted vector
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";

    return 0;
}


/* Alright buddy, the goal hear is to make a selection sort based on the one the corrected one you
attempted yesterday. You've studied the solution and now we want to try to reproduce it from memory. 
first step. let's set up the vector and basic function architecture. 
*/