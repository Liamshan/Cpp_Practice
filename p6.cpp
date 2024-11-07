#include <iostream>
#include <vector>
#include <string>



int count_vowels(const std::string &TEXT) {
    std::vector<char> vowel = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int total = 0;
    for (int i = 0; i < TEXT.length(); i++) {
        for (int j = 0; j < vowel.size(); j++) {
            if (TEXT[i] == vowel[j]) {
                total++;
            }
        }
    }
    return total;
}

int main() {
    std::string text;
    std::cout << "What's up buddy, I can take anything you type out and tell you how many vowels it has in it" << "\n";
    std::cout << "Give me a string: ";

    std::getline(std::cin, text);

    std::cout << "ALright bitch, there are: ";
    std::cout << count_vowels(text) << " vowels in your sentence\n";

}


/*
Alright, buddy boy, what's the goal for this problem?
ok, the goal here is to take a string of inputs and output
*/
