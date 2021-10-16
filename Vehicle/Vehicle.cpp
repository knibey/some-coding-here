#include "Vehicle.h"

Vehicle::Vehicle(double engineSize, int numberOfWheels, const std::string& name) {
    this->engineSize = engineSize;
    this->numberOfWheels = numberOfWheels;
    this->name = name;
};

Vehicle::~Vehicle() {};

double Vehicle::getEngineSize() const {
    return this->engineSize;
};

int Vehicle::getNumberOfWheels() const {
    return this->numberOfWheels;
};

const std::string Vehicle::getName() const {
    return this->name;
};

void Vehicle::setEngineSize(double engineSize) {
    this->engineSize = engineSize;
};

void Vehicle::setNumberOfWheels(int numberOfWheels) {
    this->numberOfWheels = numberOfWheels;
};

void Vehicle::setName(const std::string& name) {
    this->name = name;
};

void Vehicle::drive() const{
    std::cout << this->getName() << "is pulling up";
};

std::ostream& operator<<(std::ostream& out, const Vehicle& vehicle) {
    out << vehicle.getName() << " has " << vehicle.getNumberOfWheels() << " wheels and " << vehicle.getEngineSize() << " engine capacity";
};
