#include <iostream>
#include <thread>

int main() {
    /*
     * Write out all numbers between 100-500
     * that are divisible by 3 and 5
     */
//    int counter = 100;
//    while(counter < 501)
//    {
//        if(counter % 3 == 0 && counter % 5 == 0)
//            std::cout << counter << " is divisible by 3 and 5." << std::endl;
//        counter++;
//
//    }

    //Count digits of a number
//    int number;
//    std::cout << "Enter a number: ";
//    std::cin >> number;
//
//    if(number == 0)
//        std::cout << "You have entered 0." << std::endl;
//    else{
//        if(number < 0)
//            number = -1 * number;
//
//        int counter = 0;
//        while(number > 0) {
//            number = number / 10;
//            counter++;
//        }
//        std::cout << counter << std::endl;
//    }


    //Reversing number
//    int number = 0;
//    int reversedNumber = 0;
//    std::cout << "Number: ";
//    std::cin >> number;
//
//    while(number != 0) {
//        reversedNumber = reversedNumber * 10;
//        int lastDigit = number % 10;
//        reversedNumber = reversedNumber + lastDigit;
//        number = number / 10;
//    }
//    std::cout << "Reversed: " << reversedNumber;

    //Pin Validation
    int usersPin=1234;
    int pin;
    int errorCounter = 0;

    do {
        std::cout << "PIN: ";
        std::cin >> pin;
        if(pin != usersPin)
            errorCounter++;
    } while(errorCounter < 3 && pin != usersPin);

    if(errorCounter < 3) {
        std::cout << "Loading..." << std::endl;
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << "You have successfully logged in!";
    }
    else {
        std::cout << "Blocked..." << std::endl;
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << "Your bank has been notified.";
    }







    return 0;
}
