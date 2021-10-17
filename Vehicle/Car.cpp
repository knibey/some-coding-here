#include "Car.h"

Car::Car(double engineSize, int numberOfWheels, const std::string& name) {
    this->engineSize = engineSize;
    this->numberOfWheels = numberOfWheels;
    this->name = name;
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Car::~Car() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}