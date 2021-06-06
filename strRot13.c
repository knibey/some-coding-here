void strRot13(char str[]) {
    for ( char *s = str; *s != 0; s++ ) {
        if ( *s >= 'a' && *s <= 'z' ) {
            if ( *s > 'm' ) {
                *s -= 13;
            } else {
                *s += 13;
            }
        } else if ( *s >= 'A' && *s <= 'Z' ) {
            if ( *s > 'M' ) {
                *s -= 13;
            } else {
                *s += 13;
            }
        }
    }
}
