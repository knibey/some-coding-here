class Vector {
	private double x;
	private double y;

	Vector::Vector(double x, double y) {
        this.x = x;
        this.y = y;
    }

	~Vector() {}

	public double getX() {
		return x;
	}

	public double getY() {
		return y;
	}

	public void setX(double value) {
		x = value;
	}

	public void setY(double value) {
		y = value;
	}

	public double len() {
		return Math.hypot(x, y);
	}

	public boolean equals(Vector other) {
		return x == other.x && y == other.y;
	}

	public boolean notequals(Vector other) {
        return !(*this == other);
    }

    public void increment(Vector other) {
        x += other.x;
        y += other.y;
    }

    public void decrement(Vector other) {
        x -= other.x;
        y -= other.y;
    }

    public Vector summary( Vector other) {
        Vector sum = Vector(x+other.x, y+other.y);
        return sum;
    }

    public Vector substraction( Vector other) {
        Vector diff = Vector(x-other.x, y-other.y);
        return diff;
    }

    std::ostream& operator<<(std::ostream& out, Vector& vector) {
        out << '(' << v.getX() << ", " << v.getY() << ')';
        return out;
    }
}