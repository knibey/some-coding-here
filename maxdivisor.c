#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    for ( int i = a - 1; i > 1; i-- ) {
        if ( a % i == 0 ) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("%d\n", 0);
    
    return 0;
}
