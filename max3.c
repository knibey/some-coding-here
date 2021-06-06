#include <stdio.h>

int main() {
    int max, second, third;
    
    scanf("%d %d %d", &max, &second, &third);
    
    if ( second > max ) {
        max = second;
    }
    if ( third > max ) {
        max = third;
    }
    printf("%d\n", max);
    
    return 0;
}
