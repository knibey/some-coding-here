#include <stdio.h>

int main() {
    int count, max, temporary;
    
    scanf("%d %d", &count, &max);
    
    for ( int i = 1; i < count; i++ ) {
        scanf("%d", &temporary);
        
        if ( temporary > max ) {
            max = temporary;
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}
