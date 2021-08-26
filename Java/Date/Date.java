class Date {
	private int day;
	private int month;
	private int year;
	private void validate(int day, int month, int year) throws InvalidDateException {
		if ( month < 0 || month > 12 ) {
			throw new InvalidDateException();
		}

		if ( day < 0 || day > 31 ) {
			throw new InvalidDateException();
		}

		if ( month == 2 && (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ) {
			if ( day > 29 ) {
				throw new InvalidDateException();
			}
		}
	}

	public Date(int day, int month, int year) {
		this.day = day;
		this.month = month;
		this.year = year;
	}

	public Date() {
		this.day = 1;
		this.month = 1;
		this.year = 1970;
	}

	public ~Date() {}

	public int getDay() {
		return this.day;
	}

	public int getMonth() {
		return this.month;
	}

	public int getYear() {
		return this.year;
	}

	public void show() {
		System.out.println('|' + this.day + '/' + this.month + '/' + this.year + '|');
	}
}