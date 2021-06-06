#include <stdio.h>

int main() {
    int a;
    int counter = 1;
    
    scanf("%d", &a);
    
    if ( a < 0 ) {
        counter += 1;
    }
    
    for ( int i = a / 10; i != 0; i /= 10 ) {
        counter += 1;
    }
    
    printf("%d\n", counter);
    return 0;
}
