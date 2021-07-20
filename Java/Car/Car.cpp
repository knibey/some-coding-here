// class OutOfFuel {};
// class ToMuchFuel {};
// double fuelAmount;
// double fuelCapacity;
// double fuelConsumption;
// Point location;
// std::string model;
#include <cmath>
#include "Point.h"
#include "Car.h"

Car::Car(double capacity=60, double consumption=0.6, const Point& location=Point(0, 0), const std::string& model="Mercedes") {
    this->fuelAmount = capacity;
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model;
}

Car::~Car() {}

double Car::getFuelAmount() const {
    return this->fuelAmount;
}

double Car::getFuelCapacity() const {
    return this->fuelCapacity;
}

double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}

const Point& getLocation() const {
    return this->location;
}

const std::string& getModel() const {
    return this->model;
}

void Car::drive(const Point& destination) {
    double fuel_needed = this->location.distance(destination) * this->fuelConsumption;

        if ( this->fuelAmount < fuel_needed ) {
            throw OutOfFuel()
        }

        this->fuelAmount -= fuel_needed;
        this->location = destination;
}

void Car::drive(double x, double y) {
    this->drive(Point(x, y)); // FEW QUESTIONS BOUT IT
}

void Car::refill(double fuel) {
    if fuel > this->fuelCapacity {
        throw ToMuchFuel();
    }

    this->fuelAmount += fuel;
}

std::ostream& operator<<(std::ostream& out, const Car& car) {

}