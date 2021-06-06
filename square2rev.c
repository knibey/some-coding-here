#include <stdio.h>

int main() {
    int size;
    int count = 1;
    
    scanf("%d", &size);
    
    for ( int column = 1; column <= size; column++ ) {
        for ( int row = 1; row < size; row++ ) {
            printf("%d ", count);
            count += 1;
        }
        printf("%d\n", count);
        count += 1;
    }
    return 0;
}
