Vector(double x=0, double y=0) {
        this->x = x;
        this->y = y;
}

~Vector() {}

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

double len() const {
        return hypot(this->x, this->y);
}

bool operator==(const Vector& other) const {
        return this->x == other.x && this->y == other.y;
}

bool operator!=(const Vector& other) const {
        return !(*this == other);
}

void operator+=(const Vector& other) {
        this->x += other.x;
        this->y += other.y;
}

void operator-=(const Vector& other) {
        this->x -= other.x;
        this->y -= other.y;
}

Vector operator+(const Vector& other) const {
        Vector sum = Vector(this->x+other.x, this->y+other.y);
        return sum;
}

Vector operator-(const Vector& other) const {
        Vector diff = Vector(this->x-other.x, this->y-other.y);
        return diff;
}

std::ostream& operator<<(std::ostream& out, const Vector& vector) {
        out << '(' << v.getX() << ", " << v.getY() << ')';
        return out;
}
