class Car {
	private double fuelAmount;
	private double fuelCapacity;
	private double fuelConsumption;
	private Point location;
	private StringBuffer model;

	public Car(double capacity, double consumption, Point location, StringBuffer model) {
		this.fuelAmount = capacity;
		this.fuelCapacity = capacity;
		this.fuelConsumption = consumption;
		this.location = location;
		this.model = model;
	}

	public Car() {
		this.fuelAmount = 60;
		this.fuelCapacity = 60;
		this.fuelConsumption = 0.6;
		this.location = Point(0, 0);
		for ( int i = 0; i < 10; i++ ) {
            this.model.append("Mercedes");
        }
	}

    public ~Car() {

    }

    public double getFuelAmount() {
    	return this.fuelAmount;
    }

    public double getFuelCapacity() {
    	return this.fuelCapacity;
    }

    public double getFuelConsumption() {
    	return this.fuelConsumption;
    }

    public Point getLocation() {
    	return this.location;
    }

    public void getModel() {
    	System.out.println(this.model.toString());
    }

    public void drive(Point destination) throws OutOfFuelException {
    	double fuel_needed = this.location.distance(destination) * this.fuelConsumption;

        if ( this.fuelAmount < fuel_needed ) {
            throw new OutOfFuelException()
        }

        this.fuelAmount -= fuel_needed;
        this.location = destination;
    }

    public void drive(double x, double y) {
    	this.drive(Point(x, y));
    }

    public void refill(double fuel) throws ToMuchFuelException {
    	if fuel > this.fuelCapacity {
    		throw new ToMuchFuelException();
    	}

    	this.fuelAmount += fuel;
    }

    public void show() {
    	System.out.println(this.model.toString() + '(' + "Fuel: " + fuelAmount + '/' + fuelCapacity + ", " + fuelConsumption + "per mile)" + "is at" + location.toString());
    }

}