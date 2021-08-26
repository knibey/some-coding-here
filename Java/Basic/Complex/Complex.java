class Complex {
    private double real;
    private double imaginary;


    public Complex(double real, double imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }

    public Complex() {
        this.real = 0;
        this.imaginary = 0;
    }

    public ~Complex() {}

    public double getReal() {
        return real;
    }

    public double getImaginary() {
        return imaginary;
    }

    public boolean equals(Complex other) {
        return real == other.real && imaginary == other.imaginary;
    }

    public boolean notequals(Complex other) {
        return !(real == other.real && imaginary == other.imaginary);
    }

    public void increment(Complex other) {
        real += other.real;
        imaginary += other.imaginary;
    }

    public void decrement(Complex other) {
        real -= other.real;
        imaginary -= other.imaginary;
    }

    public Complex summary(Complex other) {
        Complex c = this;
        increment(&c, other);

        return c;
    }

    public Complex subtraction(Complex other) {
        Complex c = this;
        decrement(&c, other);

        return c;
    }

    public Complex multiple(Complex other) {
        double tempRe = real * other.real - imaginary * other.imaginary;
        double tempIm = real * other.imaginary + imaginary * other.real;

        reeal = tempRe;
        imaginary = tempIm;
    }

    public void show() {
        System.out.println(real + '+' + imaginary + 'i');
    }
