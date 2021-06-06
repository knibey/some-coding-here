#include <stdio.h>

int main() {
    int min, max, m, n, counter;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    counter = min;
    for ( ; counter <= max; counter++ ) {
        if ( counter % m == 0 && counter % n == 0 ) {
            printf("%d\n", counter);
        }
    }
    
    return 0;
}
