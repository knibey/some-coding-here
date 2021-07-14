void arrayShift(int array[], int size, int shift) {
    int tempsize = size / 2;
    int temp[tempsize];
    
    shift %= size;
    if ( shift < 0 ) {
        shift += size;
    }
    
    if ( shift <= tempsize ) {
        for ( int i = size - shift, j = 0; i < size; i++, j++ ) {
            temp[j] = array[i];
        }
        for ( int i = size - 1, j = size - 1 - shift; i >= shift; i--, j-- ) {
            array[i] = array[j];
        }
        for ( int i = 0; i < shift; i++ ) {
            array[i] = temp[i];
        }
    } else {
        for ( int i = size - 1 - shift; i >= 0; i-- ) {
            temp[i] = array[i];
        }
        for ( int i = 0, j = size - shift; i < shift; i++, j++ ) {
            array[i] = array[j];
        }
        for ( int i = size - 1, j = size - 1 - shift; j >= 0; i--, j-- ) {
            array[i] = temp[j];
        }
    }
}
