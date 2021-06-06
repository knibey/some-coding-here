#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int a, b;

    for ( int i = 0; i <= 5; i++ ) {
    	fscanf(in, "%d", &a);
    	fprintf(out, "%d\n", a);
    }
    fclose(in);
    fclose(out);
    
    return 0;
}
