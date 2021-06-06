#include <stdio.h>

int main() {
    int min, max;
    int cube;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min = min + 1;
    }
    if ( max % 2 == 0 ) {
        max = max - 1;
    }
    
    for ( ; min < max; min += 2 ) {
        cube = min * min * min;
        printf("%d ", cube);
    }
    cube = min * min * min;
    printf("%d\n", cube);
    
    return 0;
}
