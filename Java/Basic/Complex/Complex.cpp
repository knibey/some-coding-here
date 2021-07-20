Complex(double real=0, double imaginary=0) {
        this->real = real;
        this->imaginary = imaginary;
}

~Complex() {}

double Complex::getReal() const {
        return this->real;
}

double Complex::getImaginary() const {
        return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
        return this->real == other.real && this->imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
        return !(*this == other);
}

void Complex::operator+=(const Complex& other) {
        this->re += other.re;
        this->im += other.im;
}

void Complex::operator-=(const Complex& other) {
        this->re -= other.re;
        this->im -= other.im;
}

Complex Complex::operator+(const Complex& other) const {
        Complex c = *this;
        complexIncrement(&c, other);
        return c;
}

Complex Complex::operator-(const Complex& other) const {
        Complex c = *this;
        complexDecrement(&c, other);
        return c;
}

Complex Complex::operator*(const Complex& other) const {
        double tempRe = this->re * other.re - this->im * other.im;
        double tempIm = this->re * other.im + this->im * other.re;

        this->re = tempRe;
        this->im = tempIm;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
        out << complex.getReal() << "+" << complex.getImaginary() << 'i';
        return out;
}
