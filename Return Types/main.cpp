#include <iostream>

bool isPrimeNumber(int number);

int main() {
    int number;
    std::cout << "Enter A Number: ";
    std::cin >> number;

    bool isPrimeFlag= isPrimeNumber(number);

    if(isPrimeFlag)
        std::cout << "Prime Number" << std::endl;
    else
        std::cout << "Not A Prime Number" << std::endl;
    return 0;
}

bool isPrimeNumber(int number) {
    bool isPrimeFlag = true;
    for (int i = 2; i < number; i++){
        if(number % i == 0){
            isPrimeFlag = false;
            break;
        }
    }
    return isPrimeFlag;
}
