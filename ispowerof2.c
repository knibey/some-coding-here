#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( (a & (a - 1)) == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
