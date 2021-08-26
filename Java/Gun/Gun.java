class Gun {
	private int amount;
	private int capacity;
	private boolean isReady;
	private StringBuffer model;
	private int totalShots;

	public Gun() {
		this.amount = 0;
		this.capacity = 8;
		isReady = false;
		for ( int i = 0; i < 10; i++ ) {
            model.append("Beretta");
        }
        this.totalShots = 0;

	}

	public Gun(StringBuffer model, int capacity) {
		this.amount = 0;
		this.capacity = capacity;
		isReady = false;
		this.model = model;
		this.totalShots = 0;
	}

	public ~Gun() {}

	public int getAmount() {
		return this.amount;
	}

	public int getCapacity() {
		return this.capacity;
	}

	public boolean ready() {
		return this.isReady;
	}

	public void getModel() {
		System.out.println(model.toString());
	}

	public int getTotalShots() {
		return this.totalShots;
	}

	public void prepare() {
		this.isReady = !isReady;
	}

	public void reload() {
		this.amount = this.capacity;
	}

	public void shoot() throws NotReadyException, OutOfRoundsException {
		if ( !ready() ) {
			throw new NotReadyException();
		}

		if ( amount == 0 ) {
			throw OutOfRoundsException();
		}

		System.out.println("Bang!");
		this.amount -= 1;
		this.totalShots += 1;
	}

	public void show() {
		if ( this.ready() ) {
			System.out.println(this.model.toString() + "(ready to shoot, " + this.capacity + '|' + this.amount + '|' + this.totalShots + ')');
		} else {
			System.out.println(this.model.toString() + "(not ready to shoot, " + this.capacity + '|' + this.amount + '|' + this.totalShots + ')');
		}
	}
}