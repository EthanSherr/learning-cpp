# Pointers
In C++, a pointer variable stores the memory address of something else. It is created using the `*` sign.

```cpp
int* pointer = &gum;
```

# References
In C++, a reference variable is an alias for another object.  It is created using the `&` sign.  Two things to note:
- Anything done to the reference also happens to the original.
- Aliases cannot be changed to alias something else.

```cpp
int &sonny = songqiao;
```