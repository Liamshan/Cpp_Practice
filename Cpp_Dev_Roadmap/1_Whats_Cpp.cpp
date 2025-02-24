#include <iostream>

int add(int a, int b) {
    return a + b;
}

class Calculator {
public: 
    // A member function of Calculator class to multiply two numbers
    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    int x = 5;
    int y = 3;

    //use the standalone function 'add'
    int sum = add(x,y);

    std::cout << "The sum of x and y is: " << sum << std::endl;


    //Using the class & member function
    Calculator calc;    //we call the class
    int product = calc.multiply(x,y);

    std::cout << "The product of x and y is: " << product << std::endl;

    return 0;
}