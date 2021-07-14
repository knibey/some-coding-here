#include <stdio.h>

int fibonacci(int n) {
    if ( n < 0 ) {
        return fibonacci(n+2) - fibonacci(n+1);
    }
    if ( n == 0 ) {
        return 0;
    }
    if ( n < 2 ) {
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int index = 0;
    int temp = 0;

    scanf("%d", &index);

    for ( int i = 1; i <= index; i++ ) {
        fibonacci(i);
        temp = i;        
    }

    printf("%d", temp);

    return 0;
}