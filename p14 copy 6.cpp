#include <iostream>
#include <string>

void bleep(const std::string &word, std::string &text) {
    //nested loop here
}

int main() {
    std::string word = "broccoli";
    std::string text = "all she wanna do is smoke that broccoli my dood";

    std::cout << "Sup bro, i can take any string and bleep out the word broccoli";
    
    bleep(word, text);

}