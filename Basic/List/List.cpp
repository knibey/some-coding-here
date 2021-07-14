#include "List.hpp"

List::List(int capacity=100, double multiplier=1.05) {
        this->capacity = capacity;
        this->multiplier = multiplier;
        this->current = 0;
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
    array[index] = 0;
}

void List::insert(int value, int index) {
    array[index]=value;
}

int List::find(int value) const {
    for ( int i = 0; i < this->size(); i++ ) {
        if ( this->array[i] == value ) {
            return i;
        }
    }
    return -1;
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
        if ( this->current == 0 ) {
                throw ZeroLenException();
        }

        this->current -= 1;
        return array[current];
}

void List::sort() {

}

int List::operator[](int index) const {
        if ( this->index >= this->len ) {
                throw exception();
        }
        return this->content[index];
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
