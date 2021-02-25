#include <iostream>

// Problem: Find the sum numbers between m-n.
int recursive_sum(int m, int n) {
    if(m == n)
        return m;
    return m + recursive_sum(m+1, n);
}
int main() {
    int m = 2;
    int n = 4;
    std::cout << "Sum" << " = " << recursive_sum(m, n);
    return 0;
}
