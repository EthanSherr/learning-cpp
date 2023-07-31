## Function Declarations in Header file
C++ functions typically have two parts: declaration and definition.

Function declarations are generally stored in a header file (`.hpp` or `.h`) and function definitions (body of the function that defines how it is implemented) are written in the `.cpp` file.


### compile multiple files:

> g++ *.cpp *.h -Wall && ./a.out

> g++ *.cpp *.hpp && ./a.out
