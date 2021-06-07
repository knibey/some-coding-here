#include "List.hpp"

List::List(int capacity=100, double multiplier=1.05) {
        array = (int*)malloc(capacity*sizeof(int));

        if ( array == NULL ) {
                throw OutOfMemoryException();
        }
}

List::~List() {
    free(array);
}

int List::size() const {
    return this->current;
}

int List::max_size() const {
    return this->capacity;
}

void List::erase(int index) {
    this.array[index] = 0;
}

void List::insert(int value, int index) {
    this.array[index]=value;
}

int List::find(int value) const {
    return this->[index]=value;
}

void List::push_back(int value) {
        int newCurrent = current + 1;

        if ( newCurrent > capacity ) {
                int newCapacity = capacity * multiplier;
                int* newArray = (int*)realloc(array, newCapacity*sizeof(int));

                if ( newArray == NULL ) {
                        throw OutOfMemoryException();
                }

                capacity = newCapacity;
                array = newArray;
        }

        array[current] = value;
        current = newCurrent;
}

int List::pop_back() {
        if ( current == 0 ) {
                throw ZeroLenException();
        }

        current -= 1;
        return array[current];
}

void List::sort() {

}

int List::operator[](int index) const {

}

bool List::operator==(const List& other) const {
    return this->capacity == other.capacity;
}

bool List::operator!=(const List& other) const {
        return !(this->capacity == other.capacity);
}

std::ostream& operator<<(std::ostream& out, const List& list) {
        int last = list.size() - 1;

        if ( last > 0 ) {
        for ( int i = 0; i < last; i++ ) {
                out << list[i] << ' ';
        }
        out << list[last];   
        } else {
                out << "List is empty";
        }

        return out;
}
