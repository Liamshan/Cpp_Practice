 #include <iostream>
 #include <cmath>

 bool prime(const int &n) {
    int square_root = ceil(sqrt(n)); // this rounds up the square root of n
    bool is_prime;
    // Now test every number betwen 2 and square root to see if it's divisible
    for (int i = 2; i <= square_root; i++) {
        if (n % i == 0) {
            is_prime = false; //if n is divisible by any number between 2 and its sqrt, return "not prime"
        } else {
            is_prime = true;
        }
    }
    return is_prime;
 }

 int main() {
    int num;
    std::cout << "alright bro, give me any number and I will tell you if it's prime or not \n";

    while(true) {
        std::cout << "Enter a number: ";
        std::cin >> num;

        std::cout << "Is it prime: 1=yes, 0=no       " << prime(num) << "\n";

    }
    return 0;
 }





/*
Here we are inputting any integer and telling the user whether the number is prime or not, 
because it isn't divisible by any number between 2 and it's own square root, then it's prime. 
*/