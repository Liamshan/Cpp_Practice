#include <iostream>
#include <vector>

// Problem 2 Write a function that takes a vector of integers and returns the maximum value in the vector

//I would do this by cycling thru each number and seeing if it's bigger than the last

std::vector<int> big_vec = {3, 0, 7, 2, 0};

int main () {
    int high_num;

    for(int i = 0; i < big_vec.size(); i++) {
        if (big_vec[i] > high_num) {
            high_num = big_vec[i];

        }

    }

    std::cout << high_num << "\n";

    return 0;
}