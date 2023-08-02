#include <iostream>

int main() {

    int five = 5;

    // * on the left is a pointer
    int* intPointer = &five;
    //                & on the right is a pointer reference, go from a value to a pointer to that value!

    (*intPointer)++;

    //                  on the right side, use * to get the value, in this case it's assigned to a new int dereference variable
    int dereference = *intPointer;

    dereference++;

    std::cout << "first test:\n";
    std::cout << "five: " << five << ", dereference: " << dereference << std::endl;
    
    std::cout << "second test:\n";
    
    // writing directly to intPointer memory location to change five
    (*intPointer) = 52;
    std::cout << "five: " << five << ", dereference: " << dereference << std::endl;


    return 0;
}