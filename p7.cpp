#include <iostream>
#include <vector>

std::vector<int> numbers = {20, 500, 10, 5, 100, 1, 50};


std::string lin_search(const int &n) {
    bool contains = false;
   for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == n) {
            contains = true;
        } 
    } 
    
    if (contains == true) {
            return "contains ";
        } else {
            return "does not contain ";
        }
    return "error of some kind";
}

int main() {
    int n;

    std::cout << "Hey, I can tell if your number is in the list\n";
    while (true) {
        std::cout << "Tell me a number: ";
    std::cin >> n;

    std::cout << "the vector " << lin_search(n) << n << "\n";
    }

    return 0;
}




/*Objetive 1: implement linear search. 
*/