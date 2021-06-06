#include <stdio.h>

int main() {
    int max, n;
    
    scanf("%d %d", &max, &n);
    
    max -= max % n;
    if ( n < 0 ) {
        n = n * (-1);
    }
    
    for ( int i = 0; i < max; i += n ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    
    return 0;
}
