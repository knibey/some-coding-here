#include <stdio.h>

int main() {
    FILE *read = fopen("task.in", "r");
    FILE *write = fopen("task.out", "w");
    
    for ( char a; fscanf(read, "%c", &a) == 1; ) {
        if ( a >= 'A' && a <= 'Z' ) {
            fprintf(write, "%c", a+32);
        } else {
            fprintf(write, "%c", a);
        }
    }
    fprintf(write, "\n");
    fclose(read);
    fclose(write);
    
    return 0;
}
