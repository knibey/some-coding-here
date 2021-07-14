int arrayUnique(int array[], int size) {
    int marker = array[0];
    int len = 1;
    
    for ( int i = 1; i < size; i++ ) {
        if ( array[i] != marker ) {
            array[len] = array[i];
            
            for ( int j = i + 1; j < size; j++ ) {
                if ( array[j] == array[len] ) {
                    array[j] = marker;
                }
            }
            len += 1;
        }
    }
    
    return len;
}
