#include <iostream>

int main() {
    //Calculate the factorial of a number
    //6! = 1*2*3*4*5*6 = 720
    int number;
    int factorial = 1;
    std::cout << "Enter a number: ";
    std::cin >> number;

    for(int i = 1; i <= number; i++){
            factorial = factorial * i;
    }

    std::cout << factorial << std::endl;
    return 0;
}
