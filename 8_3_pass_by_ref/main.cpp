#include <iostream>

void swap_num(int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;
}

int main() {
    std::cout << "hey mmaaan\n";

    int a = 100;
    int b = 200;

    std::cout << "Before\n";
    std::cout << "A: " << a << " B: " << b << std::endl;

    swap_num(a, b);

    std::cout << "After\n";
    std::cout << "A: " << a << " B: " << b << std::endl;

    return 0;
}