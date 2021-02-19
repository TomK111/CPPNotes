#include <iostream>

int main() {
    int grade, sum=0;
    for(int i = 0; i < 3; i++ ){
        do {
            std::cout << "Enter your grade " <<  i+1 << ": ";
            std::cin >> grade;
        } while (grade < 1 || grade > 5);
        sum += grade;
    }
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Average Grade = " << float(sum) / 3 << std::endl;
    return 0;
}
