#include <iostream>

/*Write a program that takes a string as input and prints the 
reversed version of the string.
*/
std::string word = "hello";
std::string drow;

int main() {
    for (int i = word.size() -1 ; i >= 0; i--) {
        int j;
        j = word[i];
        drow.push_back(j);
    }
    std::cout << drow << "\n";

}