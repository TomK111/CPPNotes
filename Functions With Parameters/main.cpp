#include <iostream>

void introduceMe(const std::string& name, const std::string& city, int age);

int main() {
    introduceMe("Tomislav", "Indianapolis", 23 );
    return 0;
}

void introduceMe(const std::string &name, const std::string &city, int age) {
    std::cout << "My name is " << name << std::endl;
    std::cout << "I am from " << city << std::endl;
    std::cout << "I am " << age << " years old" << std::endl;
}
