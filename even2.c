#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if ( a % 2 != 0 ) {
        a = a + (a % 2);
    }
    
    if ( b % 2 != 0 ) {
        b = b - (b % 2);
    }
    
    for ( int i = a; i < b; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", b);
    
    return 0;
}
