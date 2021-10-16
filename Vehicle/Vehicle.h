#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>

class Vehicle {
    protected:
        double engineSize;
        int numberOfWheels;
        std::string name;
    public:
        Vehicle(double engineSize=5.7, int numberOfWheels=4, const std::string& name="Tundra");
        ~Vehicle();

        double getEngineSize() const;
        int getNumberOfWheels() const;
        const std::string getName() const;

        void setEngineSize(double engineSize);
        void setNumberOfWheels(int numberOfWheels);
        void setName(const std::string& name);

        virtual void drive() const;

};

std::ostream& operator<<(std::ostream& out, const Vehicle& vehicle);

#endif