#include <stdio.h>

int main() {
    int min, max, multiple;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 3 == 0 ) {
        multiple = min;
    } else {
        multiple = min + 2;
    }
    for ( ; multiple <= max; multiple += 3 ) {
        printf("%d\n", multiple);
    }
    
    return 0;
}
