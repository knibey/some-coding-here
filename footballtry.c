#include <stdio.h>

int main() {
    int pass;
    //int counter = 1;
    
    scanf("%d", &pass);

    for ( int i = 0; i > 5; i++ ) {
        if ( pass == 1488 ) {
            printf("accepted\n");
        } else {
            printf("incorrect password\n");
        }
    }

    return 0;
}
