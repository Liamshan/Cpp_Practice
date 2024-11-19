#include <iostream>
#include <vector>

// Bubble Sort

void bubble_sort(std::vector<int> &vect);

int main () {
    std::vector<int> numbers {543, 43, 4, 99, 1, 6, 77, 0};
    std::cout << "Sup buddy, I can bubble sort any vector\n";
    std::cout << "The sorted vector is: ";

    bubble_sort(numbers);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << ", ";
    }

    std::cout << std::endl;

    return 0;
}

void bubble_sort(std::vector<int> &vect) {
    for (int i = 0; i < vect.size() - 1; i++) {
        for (int j = 0; j < vect.size() - 1; j++) {
            if (vect[j] > vect[j + 1]) {
                std::swap(vect[j], vect[j + 1]);
            }
        }
    }
}

/*
We're gonna talk about bubble sort right now. 
ok, going thru the notes of bubble sort here the example from
the chatgpt example. so here we start the main lop
we create a vector array then we call bubble sort. then in the bubblesort 
function we are initiallizing n to be array.size() then we have a first for
loop where i hicks up while i is less than n-1. prob becuase you dont want to 
sort the last one with teh one to the right of it. on
then what we're doihng is jumping into a j loop. very similar. for j is less also
less than so j starts at zero aswell and also wants to stay smaller than n-1
then itterates up. so now we're finally getting into the meat of this code
an if statement of if arr{j} so 64 is greater than j+1
std::swap arr[j], arr[j+1]

om thats easy as fuck. not sure why didnt try that initially but fuck it
i didnt know this std::swap() command. ok I can whip this up real quick.
*/