#include <iostream>

int main() {

    int five = 5;

    // * on the left is a pointer
    int* intPointer = &five;
    //                & on the right is a pointer reference

    (*intPointer)++;

    int dereference = *intPointer;

    dereference++;

    std::cout << "first test:\n";
    std::cout << "five: " << five << ", dereference: " << dereference << std::endl;
    
    std::cout << "second test:\n";
    (*intPointer) = 52;
    std::cout << "five: " << five << ", dereference: " << dereference << std::endl;


    return 0;
}