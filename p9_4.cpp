#include <iostream>
#include <vector>

void selec_sort(std::vector<int> &vect);


int main() {
    std::vector<int> numbers {54, 2, 300, 254, 66, 21, 5, 0, 9};
    std::cout << "Yo, I can selection sort a vector" << "\n";
    std::cout << "Here is the sorted vector: ";

    selec_sort(numbers);

    // Print out the vector
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << ", ";
    }

    return 0;
}

void selec_sort(std::vector<int> &vect) {
    int littlest_guy;
    for (int i = 0; i < vect.size(); i++) {
        littlest_guy = i;
        
        for (int j = i+1; j < vect.size(); j++) {
            if (vect[littlest_guy] > vect[j]) {
                littlest_guy = j;
            }
        }
        //stage    take the little guy, put in the i position. save the i position, put in the littlest guy position. 
        //swap
        int stage = vect[i];
        vect[i] = vect[littlest_guy];
        vect[littlest_guy] = stage;
    }
}