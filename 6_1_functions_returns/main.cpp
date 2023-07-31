#include <iostream>

int sum(int a, int b);

int main() {
    int r = sum(10, 20);
    std::cout << r << std::endl;
}

int sum(int a, int b) {
    return a + b;
}