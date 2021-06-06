#include <stdio.h>

int main() {
    int a;
    int counter = 0;
    
    scanf("%d", &a);
    
    for ( int i = 1; i <= a; i++ ) {
        if ( a % i == 0 ) {
            counter += 1;
        }
    }
    
    printf("%d\n", counter);
    
    return 0;
}
