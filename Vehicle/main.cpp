#include <iostream>
#include "Vehicle.h"
#include "Car.h"

int main() {
    Vehicle vehicle = Vehicle();
    Car car = Car();

    std::cout << "----------------" << std::endl;
    std::cout << vehicle;
    std::cout << "\n----------------" << std::endl;
    std::cout << car << std::endl;

    return 0;
}