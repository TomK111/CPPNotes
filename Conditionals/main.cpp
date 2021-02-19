#include <iostream>

int main() {
    int year;
    int month;
    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "Month: ";
    std::cin >> month;

    switch(month)
    {
        case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
        std::cout << "29 day month" : std::cout << "28 day month."; break;
        case 4:
        case 6:
        case 9:
        case 11: std::cout << "30 day month"; break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: std::cout << "31 day month"; break;
        default: std::cout << "Not valid.";
    }
    return 0;
}
