#include <iostream>
#include <vector>

std::vector<int> selec_sort(std::vector<int> &vect) { 
    //code
}

int main() {
    std::vector<int> numbers = {7, 2, 5, 4, 1, 6, 0, 3};

    std::cout << "Yo, I can sort your given array\n";
    std::cout << "The sorted array is:   ";

    selec_sort(numbers);

    for (int i = 0; i < numbers.size(); i++) {
        int num_2_print = numbers[i];

        std::cout << num_2_print << ", ";
    }
}




/*
Alright, the purpose of this practice is to do some selection sort. So how does this work?
so, the idea is that i will start from the left, I will check numbers[0] and check if it
is equal to any of the other 

-if, given number is < int smallest, then smallest = "given number"
-after n passes set 7 as placeholder = 7 and 0 goes to 7 position,
- then placeholder goes to 0 position
-grab the second number in the vector, repeat. 
*/