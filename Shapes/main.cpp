#include<iostream>
#include<iomanip>
#include<iomanip>

int main() {
//    int width;
//    int height;
//
//    std::cout << "Height: ";
//    std::cin >> height;
//
//    std::cout << "Width: ";
//    std::cin >> width;
//
//    char symbol;
//    std::cout<< "Symbol: ";
//    std::cin >> symbol;
//
//    for(int h=0; h < height; h++){
//        for(int w=0; w < width; w++){
//            std::cout << std::setw(3) << symbol;
//        }
//        std::cout << std::endl;
//    }

    int length;
    std::cout << "Length: ";
    std::cin >> length;

    char symbol;
    std::cout << "Symbol: ";
    std::cin >> symbol;

    for(int i = length; i >= 1;i--){
        for(int j = 1; j <= i; j++){
            std::cout <<std::setw(5) << symbol;
        }
        std::cout << std::endl;
    }
    return 0;
}
