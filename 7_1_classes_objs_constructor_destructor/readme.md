## Destructor
For a C++ class, a destructor is a special method that handles object destruction, generally focused on preventing memory leaks. Class destructors don’t take arguments as input and their names are always preceded by a tilde `~`.

```cpp
City::~City() {
    std::cout << "Final cleanup!";
}
```

## constructor

```cpp
City::City(std::string new_name, int new_pop) {
    name = new_name;
    population = new_pop;
}
```

and it is evoked like

```cpp
int main() {
    City city("chicago", 5);
}
```