#include <stdio.h>

void arrayIncrement(int array[], int size, int increment) {
    for ( int i = 0; i < size; i++ ) {
        array[i] += increment;
    }
}


int main() {
	int s[5] = {0,1,2,3,4};

	arrayIncrement(s, 5, 3);
	
	return 0;
}
