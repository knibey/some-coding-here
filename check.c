#include <stdio.h>

#define SIZE 6


void erase(int array[]) {
        int index = 2;
        int size = 6;

        for ( int i = index; i < size; i++ ) {
                array[index] = array[index+1];
                index += 1;
        }

        array[size-1] = 0;
}


void insert(int value, int index) {
        
}


int main() {
        int array[SIZE] = {5, 9, 8, 4, 1, 5};
        int size = 6;

        for ( int i = 0; i < size; i++ ) {
                printf("%d ", array[i]);
        }

        printf("\nsome some\n");

        erase(array);

        for ( int i = 0; i < size; i++ ) {
                printf("%d ", array[i]);
        }

        return 0;
}




// 0 1 2 3 4 5
// 5 9 8 4 1 5
// delete index 3
// 0 1 2 3 4 5
// 5 9 8 1 5 0