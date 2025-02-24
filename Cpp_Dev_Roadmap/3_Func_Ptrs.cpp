#include <iostream>

void HelloWorld(int a) {
    std::cout << "Hello World! Value: " << a << std::endl;
}

int main() {
    //auto function = HelloWorld;   //Creating a variable for the function
    typedef void(*HelloWorldFunction)(int);  //this is a typedef to create a "type" of "HelloWorldFunction", to the function. Like adding int. 

    HelloWorldFunction function = HelloWorld;
    function(5);  //calling the Hello World function twice
    function(4);
    function(10);
    
    return 0;
}