Vector::Vector(double x=0, double y=0) {
        this->x = x;
        this->y = y;
}

Vector::~Vector() {}

double Vector::getX() const {
        return this->x;
}

double Vector::getY() const {
        return this->y;
}

void Vector::setX(double value) {
        this->x = value;
}

void Vector::setY(double value) {
        this->y = value;
}

double Vector::len() const {
        return hypot(this->x, this->y);
}

bool Vector::operator==(const Vector& other) const {
        return this->x == other.x && this->y == other.y;
}

bool Vector::operator!=(const Vector& other) const {
        return !(*this == other);
}

void Vector::operator+=(const Vector& other) {
        this->x += other.x;
        this->y += other.y;
}

void Vector::operator-=(const Vector& other) {
        this->x -= other.x;
        this->y -= other.y;
}

Vector Vector::operator+(const Vector& other) const {
        Vector sum = Vector(this->x+other.x, this->y+other.y);
        return sum;
}

Vector Vector::operator-(const Vector& other) const {
        Vector diff = Vector(this->x-other.x, this->y-other.y);
        return diff;
}

std::ostream& operator<<(std::ostream& out, const Vector& vector) {
        out << '(' << v.getX() << ", " << v.getY() << ')';
        return out;
}
