#include <iostream>

int num;
int total;

int main() {
    std::cout << "Input a number: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            std::cout << i << " ";
            total += i;
        }

    }
    std::cout << "Total = " << total << "\n";

    return 0;
}