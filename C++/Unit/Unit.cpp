#include "Unit.hpp"

class UnitIsDead {};

void Unit::ensureIsAlive() {
    if ( hitPoints == 0 ) {
        throw UnitIsDead();
    }
}

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->damage = dmg;
    this->hitPoints = hp;
    this->hitPointsLimit = hp;
    this->name = name;
}

Unit::~Unit() {}

int Unit::getDamage() const {
    return this->damage;
}

int Unit::getHitPoints() const {
    return this->hitPoints;
}

int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit; 
}

const std::string& getName() const {
    return this->name;
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();

    if ( hp > this->hitPointsLimit ) {
        this->hitPoints += hp - (hp - this->hitPointsLimit);
    }

    this->hitPoints = hp;
}

void Unit::takeDamage(int dmg) {
    if ( ensureIsAlive() ) {
        int potentialHp;

        potentialHp = this->hitPoints - dmg;
        if ( potentialHp < 0 ) {
            potentialHp = 0;
        }

        this->hitPoints = potentialHp;
    }
}

void Unit::attack(Unit& enemy) {
    enemy.takeDamage(this->damage);
}

void Unit::counterAttack(Unit& enemy) {
    enemy.takeDamage(this->damage/2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName() << " " << unit.getHitPoints() << "/" << unit.getHitPointsLimit() << "hp, damage: " << unit.getDamage();
}
