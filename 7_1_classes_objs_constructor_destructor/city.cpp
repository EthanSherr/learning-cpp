#include <iostream>
#include <string>
#include "city.hpp"

City::City(std::string new_name, int new_pop) {
    name = new_name;
    population = new_pop;
}

void City::add_resident() {
    population++;
}

City::~City() {
    std::cout << "Final cleanup!";
}

