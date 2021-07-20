#include "Pen.hpp"

Pen::Pen(int inkCapacity = 4096) {
    this->inkCapacity = inkCapacity;
    this->inkAmount = inkCapacity;
}

Pen::~Pen() {}

int Pen::getInkAmount() const {
    return this->inkAmount;
}

int Pen::getInkCapacity() const {
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    if ( this->inkAmount == 0 ) {
        throw OutOfInkException();
    }
    if ( message.length() > this->inkAmount ) {
        paper.addContent(message.substr(0, this->inkAmount));
        this->inkAmount = 0;
        return;
    }
    paper.addContent(message);
    this->inkAmount -= message.length();
}

void Pen::refill() {
    this->inkAmount = this->inkCapacity;
}

// std::ostream& operator<<(std::ostream& out, const Pen pen) {
//     out << "Pen(" << pen.getInkCapacity() << "/";
//     out << pen.getInkAmount() << ")";
//     return out;
// }
