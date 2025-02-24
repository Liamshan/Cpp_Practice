#include <iostream>
#include <vector>

//Goal To prompt the 3 items in an array;

int main() {
    std::vector<std::string> students = {"Spongebob", "Patrick", "Squidward", "Liam"};

    //Print the Students
    /*for (int i = 0; i <students.size(); i++) {
        std::cout << students[i] << std::endl;
    }
        */
    //For Each Loop
    for(std::string student : students) {
        std::cout << student << "\n";
    }
}