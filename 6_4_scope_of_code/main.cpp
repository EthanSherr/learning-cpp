#include <iostream>

void print();

int i = 10;         // global variable

int main() {
    std::cout << "main() says" << std::endl;
    std::cout << i << "\n";
    print();
}

void print() {
    int j = 0;      // local variable
    i = 20;
    std::cout << " print() says " << std::endl;
    std::cout << "i: " << i << "\n";
    std::cout << "j: " << j << "\n";
}