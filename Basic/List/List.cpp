#include "List.hpp"

List(int capacity=100, double multiplier=1.05) {
        array = (int*)malloc(capacity*sizeof(int));

        if ( array == NULL ) {
                throw OutOfMemoryException();
        }
}

~List() {
    free(array);
}

int size() const {
    return this->current;
}

int max_size() const {
    return this->capacity;
}

void erase(int index) {
    this->index = 0;
}

void insert(int value, int index) {
    this->[index]=value;
}

int find(int value) const {
    return this->[index]=value;
}

void push_back(int value) {
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

int pop_back() {
        if ( current == 0 ) {
                throw ZeroLenException();
        }

        current -= 1;
        return array[current];
}

void sort() {

}

int operator[](int index) const {

}

bool operator==(const List& other) const {

}

bool operator!=(const List& other) const {

}

std::ostream& operator<<(std::ostream& out, const List& list) {
        int last = list.size() - 1;

        for ( int i = 0; i < last; i++ ) {
                out << list[i] << ' ';
        }

        out << list[last];
        return out;
}
