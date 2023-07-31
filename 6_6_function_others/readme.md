## Function Template
A function template is a C++ tool that allows programmers to add data types as parameters, enabling a function to behave the same with different types of parameters. The use of function templates and template parameters is a great C++ resource to produce cleaner code, as it prevents function duplication.

## Default Arguments
In C++, default arguments can be added to function declarations so that it is possible to call the function without including those arguments. If those arguments are included the default value is overwritten. Function parameters are read from left to right, so default parameters should be placed from right to left.

## Functions Definitions
In C++, it is common to store function definitions in a separate .cpp file from the main() function. This separation results in a more efficient implementation.

Note: If the file containing the main() function needs to be recompiled, it is not necessary to recompile the files containing the function definitions.

## Function Overloading
In C++, function overloading enables functions to handle different types of input and return different types. It allows multiple definitions for the same function name, but all of these definitions must differ in their arguments.

## Inline Functions
An inline function is a function definition, usually in a header file, qualified by the inline keyword, which advises the compiler to insert the function’s body where the function call is. If a modification is made in an inline function, it would require all files containing a call to that function to be recompiled.