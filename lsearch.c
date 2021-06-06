#include <stdio.h>

#define SIZE 100

int lsearch(int array[], int size, int needle) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == needle ) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[SIZE];
    int needle;
    int size = 1;
    
    fscanf(in, "%d", &needle);
    
    for ( int i = 0; i < SIZE && fscanf(in, "%d", &array[i]) == 1; i++ ) {
        size += 1;
    }
    fclose(in);
    
    fprintf(out, "%d\n", lsearch(array, size, needle));
    fclose(out);
    
    return 0;
}
