#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
    public:
        Car(double engineSize=5.7, int numberOfWheels=4, const std::string& name="Tundra");

        ~Car();
};

#endif