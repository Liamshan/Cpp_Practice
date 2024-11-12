#include <iostream>
#include <vector>

std::vector<int> selec_sort(std::vector<int> &vect) { 
    int smallest;
    int smallest_position;

    for (int i = 0; i < vect.size(); i++) {
        smallest = vect[i];
        for (int j = 1; j < vect.size()-i; j++)
        if (vect[i] > vect[i + j]) {  //if number is bigger than next number
            smallest = vect[i + j];  // save the value of new smallest
            smallest_position = i + j;  // save the position of new smallest
        }
        int staging = vect[smallest_position];  // hold the value of the smallest while we swap them
        vect[i] = smallest; // put smallest value in i position
        vect[smallest_position] = staging; // put whatever was in 'i' into the newly open space
    }

    return vect;
}

int main() {
    std::vector<int> numbers = {7, 2, 5, 4, 1, 6, 0, 3};

    std::cout << "Yo, I can sort your given array\n";
    std::cout << "The sorted array is:   ";

    std::vector<int> numbers_sorted = selec_sort(numbers);   //the newly sorted vector

    for (int i = 0; i < numbers_sorted.size(); i++) {
        int num_2_print = numbers_sorted[i];

        std::cout << num_2_print << ", ";     // Just pront each value of the newly sorted vector
    }

    return 0;
}




/*
Alright, the purpose of this practice is to do some selection sort. So how does this work?
so, the idea is that i will start from the left, I will check numbers[0] and check if it
is equal to any of the other 

-if, given number is < int smallest, then smallest = "given number"
-after n passes set 7 as placeholder = 7 and 0 goes to 7 position,
- then placeholder goes to 0 position
-grab the second number in the vector, repeat. 

so, your issue is that you're not staging the smallest, you're just overwriting it i think?
*/