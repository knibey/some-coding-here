#include <stdio.h>

#define SIZE 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int maxJump, cell;
    unsigned long long ways[SIZE];
    
    fscanf(in, "%d %d", &maxJump, &cell);
    fclose(in);
    
    for ( int i = 0; i < maxJump; i++ ) {
        ways[i] = 1 << i;
    }
    
    for ( int i = maxJump; i < cell; i++ ) {
        ways[i] = 0;
        
        for ( int j = i - maxJump; j < i; j++ ) {
            ways[i] += ways[j];
        }
    }
    
    fprintf(out, "%llu\n", ways[cell-1]);
    fclose(out);
    
    return 0;
}
