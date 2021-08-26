class Unit {
	private int damage;
	private int hitPoints;
	private int hitPointsLimit;
	private StringBuffer name;
	private void ensureIsAlive() throws UnitIsDeadException {
		if ( hitPoints == 0 ) {
			throw new UnitIsDeadException();
		}
	}

	public Unit(StringBuffer name, int hp, int dmg) {
		this.damage = dmg;
		this.hitPoints = hp;
		this.hitPointsLimit = hp;
		this.name = name;
	}

	public Unit() {
		this.damage = 10;
		this.hitPoints = 100;
		this.hitPointsLimit = 100;
		for ( int i = 0; i < 10; i++ ) {
            this.name.append("Warrior");
        }
	}

    public ~Unit() {}

    public int getDamage() {
    	return this.damage;
    }

    public int getHitPoints() {
    	return this.hitPoints;
    }

    public int getHitPointsLimit() {
    	return this.hitPointsLimit;
    }

    public void getName() {
    	System.out.println(name.toString);
    }

    public void addHitPoints(int hp) {
    	ensureIsAlive();

    	if ( hp > this.hitPointsLimit ) {
    		this.hitPoints += hp - (hp-this.hitPointsLimit);
    	}

    	this.hitPoints = hp;
    }

    public void takeDamage(int dmg) {
    	if ( ensureIsAlive() ) {
    		int potentialHp;

    		potentialHp = this.hitPoints - dmg;
    		if ( potentialHp < 0 ) {
    			potentialHp = 0;
    		}

    		this.hitPoints = potentialHp;
    	}
    }

    public void attack(Unit enemy) {
    	enemy.takeDamage(this.damage);
    }

    public void counterAttack(Unit enemy) {
    	enemy.takeDamage(this.damage/2);
    }

    public void show() {
    	System.out.println(this.name.toString() + ' ' + this.hitPoints + '/' + this.hitPointsLimit + "hp, damage: " + this.damage);
    }
}