void arrayExchange(int array[], int len) {
    for ( int i = 0, j = 1; j < len; i += 2, j += 2 ) {
        int buffer = array[i];
        
        array[i] = array[j];
        array[j] = buffer;
    }
}
