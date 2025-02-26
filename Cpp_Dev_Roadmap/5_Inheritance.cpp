#include <iostream>

class Animal {
public:
    bool alive = true;

    void eat() {
        std::cout << "This animal is eating.\n";
    }
};

class Dog : public Animal {
public:
    void speak(std::string words) {
        std::cout << "Dog says: " << words << std::endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        std::cout << "Cat says: Meow \n";
    }
};



int main() {

    Dog dog;
    Cat cat;

    std::cout << dog.alive << "\n";

    dog.eat();

    dog.speak("sub nigga");

    //Cat attributes

    std::cout << cat.alive << std::endl;

    cat.eat();

    cat.meow();

    return 0;
}