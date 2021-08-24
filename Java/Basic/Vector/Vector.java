class Vector {
	private double x;
	private double y;

	public Vector(double x, double y) {
        this.x = x;
        this.y = y;
    }

	public ~Vector() {}

	public double getX() {
		return this.x;
	}

	public double getY() {
		return this.y;
	}

	public void setX(double value) {
		this.x = value;
	}

	public void setY(double value) {
		this.y = value;
	}

	public double len() {
		return Math.hypot(this.x, this.y);
	}

	public boolean equals(Vector other) {
		return this.x == other.x && this.y == other.y;
	}

	public boolean notequals(Vector other) {
        return !(*this == other);
    }

    public void increment(Vector other) {
        this.x += other.x;
        this.y += other.y;
    }

    public void decrement(Vector other) {
        this.x -= other.x;
        this.y -= other.y;
    }

    public Vector summary( Vector other) {
        Vector sum = Vector(this.x+other.x, this.y+other.y);
        return sum;
    }

    public Vector substraction( Vector other) {
        Vector diff = Vector(this.x-other.x, this.y-other.y);
        return diff;
    }

    public void show() {
    	System.out.println('(' + this.x + ", " + this.y + ')');
    }
}