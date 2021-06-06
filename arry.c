void strCopy(char target[], char source[]) {
    int length = 0;
    
    for ( ; source[length] != '\0'; length++ ) {
        target[length] = source[length];
    }
    target[length] = '\0';
}


