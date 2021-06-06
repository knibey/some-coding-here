#include <stdio.h>

#define LIMIT 101

void strRot13(char str[]) {
    for ( int i = 0, charI = str[0]; charI != '\0'; i++, charI = str[i] ) {
        if ( charI >= 'a' && charI <= 'm' ) {
            str[i] += 13;
        } else if ( charI > 'm' && charI <= 'z' ) {
            str[i] -= 13;
        } else if ( charI >= 'A' && charI <= 'M' ) {
            str[i] += 13;
        } else if ( charI > 'M' && charI <= 'Z' ) {
            str[i] -= 13;
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT];
    
    fscanf(in, "%100s", str);
    fclose(in);
    
    strRot13(str);
    
    fprintf(out, "%s\n", str);
    fclose(out);
    
    return 0;
}
