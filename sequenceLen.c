#include <stdio.h>

#define LIMIT 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int length = 0;
    
    for ( int i; length < LIMIT && fscanf(in, "%d", &i) == 1; length++ );
    fclose(in);
    
    fprintf(out, "%d\n", length);
    fclose(out);
    
    return 0;
}
