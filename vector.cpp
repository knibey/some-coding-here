#include <iostream>
#include <cmath>

class Vector {
    private:
    double x, y;

    public:
        Vector(double x, double y) {
            this->x = x;
            this->y = y;
        }

        double getX() const {
            return this->x;
        }

        double getY() const {
            return this->y;
        }

        void setX(double value) {
            this->x = value;
        }

        void setY(double value) {
            this->y = value;
        }

        void increment(const Vector& other) {
            this->x += other.x;
            this->y += other.y;
        }

        void decrement(const Vector& other) {
            this->x -= other.x;
            this->y -= other.y;
        }

        int equal(const Vector& other) const {
            return this->x == other.x && this->y == other.y;
        }

        Vector sum(const Vector& other) const {
            Vector sum = Vector(this->x+other.x, this->y+other.y);
            return sum;
        }

        Vector diff(const Vector& other) const {
            Vector diff = Vector(this->x-other.x, this->y-other.y);
            return diff;
        }

        double length() const {
            return hypot(this->x, this->y);
        }

};

std::ostream& operator<<(std::ostream& out, const Vector& v) {
    out << '(' << v.getX() << ", " << v.getY() << ')';
    return out;
}

int main() {
    Vector a = Vector(1, 4);
    Vector b = Vector(3, 2);
    a.increment(b);
    std::cout << "increment test " << a << std::endl;
    a.decrement(b);
    std::cout << "decrement test " << a << std::endl;

    std::cout << "equal test " << a.equal(b) << std::endl;
    std::cout << "summary test " << a.sum(b) << std::endl;
    std::cout << "difference test " << a.diff(b) << std::endl;
    std::cout << "length test a " << a.length() << std::endl;
    std::cout << "length test b " << b.length() << std::endl;

    return 0;
}
