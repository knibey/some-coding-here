void arraySort(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        int max = array[i];
        int index = i;
        
        for ( int j = 0; j < i; j++ ) {
            if ( array[j] > max ) {
                max = array[j];
                index = j;
            }
        }
        array[index] = array[i];
        array[i] = max;
    }
}
