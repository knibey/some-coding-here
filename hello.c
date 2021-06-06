#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);

    if ( a > b ) {
    	printf("%d\n", a);
    }
    if ( b > a ) {
    	printf("%d\n", b);
    }
    if ( a == b ) {
    	printf("%d\n", a);
    }

    return 0;
}
