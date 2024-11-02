#include <iostream>

void mult_table(const int &N) {
    for (int i = 1; i <= 10; i++) {
        int product = N * i;
        std::cout << N << " x " << i << " = " << product << "\n";
    }
}

int main() {
    int n;

    std::cout << "What's up buddy I can take any number you give me\n and turn it into a multiplication table" << std::endl;
    std::cout << "give me a number" << std::endl;
    std::cin >> n;

    std::cout << "Sick bro, your number '" << n << "' is multiplied by" << std::endl;

    mult_table(n);

    return 0;
}



/* Goal is to take an input number and print it's multiplication table up to 10
*/