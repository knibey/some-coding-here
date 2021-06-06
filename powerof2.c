#include <stdio.h>

int main() {
    int stepen;
    int power = 1;
    
    scanf("%d", &stepen);
    
    for ( int i = 0; i < stepen; i++ ) {
        printf("%d ", power);
        power *= 2;
    }
    printf("%d\n", power);
    
    return 0;
}
