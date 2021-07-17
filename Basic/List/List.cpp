#include "List.hpp"

List::List(int capacity=100, double multiplier=1.05) {
        this->capacity = capacity;
        this->multiplier = multiplier;
        this->current = 0;
        this->array = (int*)malloc(capacity*sizeof(int));

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
        for ( int i = this->index; i < this->capacity; i++ ) {
                this->array[index] = this->array[index+1];
                this->index += 1;
        }

        this->array[capacity] = 0;
}

void List::insert(int value, int index) {
        if ( index > this->capacity ) {
                int newCapacity = this->capacity * this->multiplier;
                int* newArray = (int*)realloc(array, newCapacity*sizeof(int));

                if ( newArray == NULL ) {
                        throw OutOfMemoryException();
                }

                this->capacity = newCapacity;
                this->array = newArray;
        }

        this->array[index] = value;
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
                int newCapacity = this->capacity * this->multiplier;
                int* newArray = (int*)realloc(this->array, newCapacity*sizeof(int));

                if ( newArray == NULL ) {
                        throw OutOfMemoryException();
                }

                this->capacity = newCapacity;
                this->array = newArray;
        }

        this->array[current] = value;
        this->current = newCurrent;
}

int List::pop_back() {
        if ( this->current == 0 ) {
                throw ZeroLenException();
        }

        this->current -= 1;
        return this->array[current];
}

void List::sort() {
        for ( int i = 1; i < this->size(); i++ ) {
                int j = i;
                int temp = this->array[i];

                for ( int prev = j - 1; j > 0 && temp < this->array[prev]; j--, prev-- ) {
                        this->array[j] = this->array[prev];
                }
                this->array[j] = temp;
        }
}

int List::operator[](int index) const {
        return this->array[index];
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
