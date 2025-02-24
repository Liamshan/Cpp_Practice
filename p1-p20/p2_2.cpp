#include <iostream>
#include <vector>

//std::vector<int> input {100, 7, 6, 12, 25};
int largest = 0;

// Functions  (input & calculation)
int calculation(std::vector<int> input_vector) {
    
    for (int i = 0; i < input.size(); i++) {
        if (input[i] > largest) {
            largest = input[i];
        }
    }

    return largest;
}

// Allow user to populate vector
std::vector<int> input_values() {

    std::vector<int> i_v;
    int value;

    for (int i = 0; i < 5; i++) {
        std::cout << "\n input number " << i << " of 5";
        std::cin >> value;

        i_v[i] = value;
    }
    return i_v;
}

int main () {

    

    //calculation(input);

    std::cout << "the largest number is: " << calculation(input_values) << "\n";

    return 0;
}


// goal is to find the maximum value
/* ok so I'm thinking what we do here is, we parse thru the vector. we say
for i being less than input.size() we take imput[2] and compare it to see 
if it's bigger than input[1]. 
if it is then we set largest = input[i]*/

/*We could have the user populate the vector. How about that.
we could also do this with a function. that would be a good practice of functions
*/