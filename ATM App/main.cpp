#include <iostream>
#include <stdlib.h>

void showMenu() {
    std::cout << "**********MENU**********" <<std::endl;
    std::cout << "1. Check Balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "************************" << std::endl;

}

int main() {
    /*
     * Check Balance,
     * Deposit Money,
     * Withdraw Money,
     * Show Menu
     */
    int option;
    double balance = 500;
    do {
        showMenu();
        std::cout << "Please selection an option: ";
        std::cin >> option;

        switch(option) {
            case 1:
                std::cout << "Balance is " << balance << " $" << std::endl;
                break;
            case 2:
                std::cout << "Deposit Amount: ";
                double depositAmount;
                std::cin >> depositAmount;
                balance += depositAmount;
                break;
            case 3:
                std::cout << "Withdraw Amount: ";
                double withdrawAmount;
                std::cin >> withdrawAmount;
                if(withdrawAmount <= balance)
                    balance -= withdrawAmount;
                else
                    std::cout << "Insufficient Funds" << std::endl;
                break;
        }
    } while (option != 4);

    return 0;
}
