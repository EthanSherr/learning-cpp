// #include <iostream>
#include <string>

class City {

public:
    std::string name;
    int population;

public:
    void add_resident();

    City(std::string new_name, int new_pop);
    ~City(); // needed?
};
