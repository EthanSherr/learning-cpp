#include <iostream>

int triple(int const &i) {
    // i = 1; // i is a const, can't assign!
    return i * 3;
}

int main() {

    int result = triple(3);

    std::cout << "tripple(3) : " << result << std::endl;

    return 0;
}