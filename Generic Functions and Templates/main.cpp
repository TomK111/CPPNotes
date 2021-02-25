#include <iostream>

template<typename T>

void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 7;
    std::cout << a << " = " << b << std:: endl;
    Swap(a, b);
    std::cout << a << " = " << b << std::endl;

    char c = 'c', d = 'd';
    std::cout << c << " = " << d << std::endl;
    Swap(c, d);
    std::cout << c << " = " << d << std::endl;
    return 0;
}
