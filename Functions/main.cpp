#include <iostream>

void function(); //Declaration of function goes before main function.

int main() {
    std::cout << "Hello from main()" << std::endl;
    function();
    return 0;
}

void function(){
    std::cout << "Hello from function()" << std::endl;
}