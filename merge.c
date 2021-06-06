void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int temparray[size];
    int i = lo;
    int j = mid;
    int k = 0;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            temparray[k] = array[i];
            i += 1;
        } else {
            temparray[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        temparray[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        temparray[k] = array[j];
    }
    
    for ( int i = lo, k = 0; i < hi; i++, k++ ) {
        array[i] = temparray[k];
    }
}
