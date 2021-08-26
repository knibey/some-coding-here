#include "Gun.hpp"

Gun::Gun(const std::string& model="Beretta", int capacity=8) {
      this->amount = 0;
      this->capacity = capacity;
      this->isReady = false;
      this->model = model;
      this->totalShots = 0;
}

Gun::~Gun() {}

int Gun::getAmount() const {
      return this->amount;
}

int Gun::getCapacity() const {
      return this->capacity;
}

bool Gun::ready() const {
      return this->isReady;
}

const std::string& Gun::getModel() const {
      return this->model;
}

int Gun::getTotalShots() const {
      return this->totalShots;
}

void Gun::prepare() {
      this->isReady = !isReady;
}

void Gun::reload() {
      this->amount = this->capacity;
}

void Gun::shoot() {
      if ( !ready() ) {
            throw NotReady();
      }

      if ( amount == 0 ) {
            throw OutOfRounds();
      }

      std::cout << "Bang!" << endl;
      this->amount -= 1;
      this->totalShots += 1;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
      out << '(' << gun.getModel() << " (";
      if ( gun.ready() ) {
            out << "ready to shoot, ";
      } else {
            out << "not ready to shoot, ";
      }
      out << gun.getCapacity() << '|' << gun.getAmount() << "|" << gun.getTotalShots << ')' << std::endl;
      return out;
}
