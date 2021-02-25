#include <iostream>

int main() {
    int rows, columns;
    std::cout << "Rows: " << std::endl;
    std::cin >> rows;
    std::cout << "Columns: " << std::endl;
    std::cin >> columns;

    int** table = new int*[rows];
    for(int i = 0; i < rows; i++) {
        table[i] = new int[columns];
    }

    table[1][2] = 88;

    for(int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;
    table = NULL;

    return 0;
}
