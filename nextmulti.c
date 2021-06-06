#include <stdio.h>

int main() {
    int a, b, remainder, k;
    
    scanf("%d %d", &a, &b);
    
    remainder = a % b;
    if ( remainder < 0 ) {
        k = remainder * (-1);
        a += k;
    }
    if ( remainder > 0 ) {
        k = remainder;
        a = (a - k) + b;
    }
    printf("%d\n", a);
    
    return 0;
}
