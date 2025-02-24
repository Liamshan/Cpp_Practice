//Bleep Function

#include <iostream>

//Bleep Function
void bleep(const std::string &word, std::string &text) {
    for (int i = 0; i < text.size(); i++) {
        if( text[i]=='b' && 
            text[i+1]=='r' &&
            text[i+2]=='o' &&
            text[i+3]=='c' &&
            text[i+4]=='c' &&
            text[i+5]=='o' &&
            text[i+6]=='l' &&
            text[i+7]=='i') {
            
            text[i]='*'; 
            text[i+1]='*';
            text[i+2]='*';
            text[i+3]='*';
            text[i+4]='*';
            text[i+5]='*';
            text[i+6]='*';
            text[i+7]='*';
            }
    }
    std::cout << text << std::endl;
}

int main() {
    std::string WORD = "broccoli";
    std::string TEXT = "All she wanna do is smoke that broccoli with me";

    bleep(WORD, TEXT);

    return 0;
}
