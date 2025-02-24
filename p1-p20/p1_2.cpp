#include <iostream>

int n;
int total;

int main () {
    std::cout << "Enter a Number: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            total += i;
            std::cout << i << "\n";
        }
    }

    std::cout << "Sum of odd values = " << total << "\n";

    return 0;
}




/*ok so whwat we can do is, when we take in the number, we immediately identify
if the number is a 


1 practice problem post work every day
*/