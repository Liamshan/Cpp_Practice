#include <iostream>

void print(int thing) {
    std::cout << thing << "\n";
}

int main() {
    int number = 69;

    int* ptr = &number;

    print(number);
    print(*ptr);

    std::cout << "Address of pointer is: " << ptr << "\n";

    return 0;
}

/* The objective is to practice with pointers.
also chasing clout
*/