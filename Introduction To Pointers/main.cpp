#include <iostream>

void printNumber(int* numberPtr) {
    std::cout << *numberPtr << std::endl;
}

void printCharacter(char* characterPtr) {
    std::cout << *characterPtr << std::endl;
}

void print(void* ptr,char type) {
    switch(type) {
        case 'i':
            std::cout << *((int*)ptr) << std::endl;
            break;
        case 'c':
            std::cout << *((char*)ptr) << std::endl;
            break;
    }
}

int main() {
   int number = 5;
   char letter = 'a';
//   printNumber(&number);
//   printCharacter(&letter);
    print(&number, 'i');
    print(&letter, 'c');

    return 0;
}
