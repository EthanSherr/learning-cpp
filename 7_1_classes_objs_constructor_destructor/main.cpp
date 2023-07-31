#include <iostream>
#include "city.hpp"


void doStuff(City& city, int pop_increase) {
    for (int i = 0; i < pop_increase; i++) {
        city.add_resident();
    }
}

int main() {
    std::cout << "Hey man!" << std::endl;
    City city("hey", 5);

    city.add_resident();
    city.add_resident();
    city.add_resident();
    city.add_resident();
    
    std::cout << "The city is " << city.name << " and its population is " << city.population << std::endl;

    doStuff(city, 100);
    std::cout << "After doStuff 100 call... " << city.name << " and its population is " << city.population << std::endl;

}