#include <stdio.h>

#define LIMIT 5

// sequenceLen
int main()
{
    FILE* in = fopen("task.in", "r");
    int num;

    // read the whole file contents
    for ( ; fscanf(in, "%d", &num) == 1; ) {
        printf("%d_", num);
    }
    fclose(in);

    printf("\n");

    // and once more...
    // read no more than 5 numbers
    in = fopen("task.in", "r");
    for ( int limit = 0; fscanf(in, "%d", &num) != EOF && limit < LIMIT; limit++) {
        printf("%d_", num);
    }

    return 0;
}