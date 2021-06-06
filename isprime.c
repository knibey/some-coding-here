int isPrime(int x) {
    if ( x == 2 ) {
        return 1;
    }
    
    if ( x < 2 ) {
        return 0;
    }
    
    for ( int i = 2; i * i <= x; i++ ) {
        if ( x % i == 0 ) {
            return 0;
        }
    }
    
    return 1;
}

#include <stdio.h>

int main() {
	int a;

	scanf("%d", &a);

	printf("%d\n", isPrime(a));

	return 0;
}