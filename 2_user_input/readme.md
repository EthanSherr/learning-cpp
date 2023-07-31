## get user input by using 

```cpp
#include <iostream>
...
int somevar = 0;
std::cin >> somevar
```

## More about some primitives

### int
ints are int32
range [-2^31, 2^31 - 1]

### double
Double require 8 bytes of memory space.

### char
`char` is a type for storing individual characters. Characters are wrapped in single quotes '. Characters typically require 1 byte of memory space and range from -128 to 127.
```cpp
char grade = 'A';
char punctuation = '?';
```

### string 
`std::string` is a type for storing text strings. Strings are wrapped in double quotes `"`
```cpp
std::string message = "good nite";
std::string user = "codey";
```

### bool
`bool` is a type for storing `true` or `false` boolean values.  Booleans typically require 1 byte of memory space.
```cpp
bool organ_donor = true;
bool late_to_work = false;
```