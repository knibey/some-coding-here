#include <stdio.h>

int main() {
    int base, indicator;
    int power = 1;
    
    scanf("%d %d", &base, &indicator);
    
    for ( int i = 0; i < indicator; i++ ) {
        printf("%d ", power);
        power *= base;
    }
    printf("%d\n", power);
    
    return 0;
}
