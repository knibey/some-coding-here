void sliceShiftLeft(int array[], int start, int end) {
    int last = size - 1;
    int temp = array[end];
    
    for ( int i = last; i > 0; i-- ) {
        array[i] = array[i-1];
    }
    array[0] = temp;
}
