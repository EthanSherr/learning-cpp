## compiling

### compile with c++11
`g++ -std=c++11 main.cpp`

## vector type
During the creation of a C++ vector, the data type of its elements must be specified. Once the vector is created, the type cannot be changed.

## Index
An index refers to an element’s position within an ordered list; vectors are 0 indexed.

## initialization
Vectors are dynamic; they can shrink and grow in size.  You can initialize the vector size

```cpp
#include <iostream>
#include <vector>

int main() {
  
  std::vector<int> grades(3);
  
  grades[0] = 90;
  grades[1] = 86;
  grades[2] = 98;
  
}```


## .push_back() & .pop_back()
Following functions can be used to add and remove an element in a vector.
- `.push_back()` to add an element to the "end" of a vector
- `.pop_back()` to remove an element from teh "end" of a vector

```cpp
std::vector<std::string> wishlist;

wishlist.push_back("Oculus");
wishlist.push_back("Telecaster");

wishlist.pop_back();

std::cout << wishlist.size(); 
// Prints: 1
```