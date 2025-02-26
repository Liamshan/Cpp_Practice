#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;
    float gpa;
};

int main() {
    char answer;

    std::cout << "Would you like to create a new student? (y/n): ";
    std::cin >> answer;
    std::cin.ignore();  // Cear newline character from input buffer
    std::cout << std::endl;

    if (answer == 'y' || answer == 'Y') {
        Student student1;

        std::string name1;
        int age1;
        float gpa1;

        std::cout << "Enter student name: ";
        std::getline(std::cin, student1.name);

        std::cout << "Enter student age: ";
        while (!(std::cin >> student1.age)) {
            std::cout << "Invalid input. please enter a valid age: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "Enter student GPA: ";
        while(!(std::cin >> student1.gpa)) {
            std::cout << "Invalid input. please enter a valid GPA: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\nStudent Created:\n";
        std::cout << "Name: " << student1.name << "\n";
        std::cout << "Age: "  << student1.age << "\n";
        std::cout << "GPA: " << student1.gpa << "\n";
    }

    return 0;

}