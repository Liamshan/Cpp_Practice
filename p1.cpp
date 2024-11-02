#include <iostream>
#include <vector>


std::vector<int> odd_nums;
int total = 0;

int main() {
    int num = 5;
    
    // User Input
    std::cout << "Please input a number: \n";
    std::cin >> num;


    // Loop to create the vector of odd values
    for (int i = num; i > 0; i--) {
        if (i % 2 != 0) {
            odd_nums.push_back(i);
            std::cout << i << " ";
        }

    }
    //Loop to add the vector of odd numbers
    for (int i = 0; i < odd_nums.size(); i++) {
        total = total + odd_nums[i];
    }

    std::cout << "Total = " << total << "\n";

    return 0;
}

/* ok what do i want to do. We could break it into it's parts
so maybe we create an ever growing vector that populates num=1 and pop pushes
it while i<0. Let's try that. 

*/