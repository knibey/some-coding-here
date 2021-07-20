#include <cmath>
#include "Point.hpp"

Point::Point(double x=0, double y=0) {
        this->x = x;
        this->y = y;
}

Point::~Point() {}

double Point::getX() const {
        return this->x;
}

double Point::getY() const {
        return this->y;
}

void Point::setX(double value) {
        this->x = value;
}

void Point::setY(double value) {
        this->y = value;
}

double Point::distance(const Point& other) const {
        return hypot(this->x-other.x, this->y-other.y);
}

bool Point::operator==(const Point& other) const {
        return this->x == other.x && this->y == other.y;
}

bool Point::operator!=(const Point& other) const {
        return !(*this == other);
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
        out << '(' << p.getX() << ", " << p.getY() << ')';
        return out;
}
