int partition(int array[], int start, int end) {
    int pivotIndex = (start + end) / 2;
    int pivot = array[pivotIndex];
       
    array[pivotIndex] = array[end];
    array[end] = pivot;
    pivotIndex = end;
    for ( int i = start, minIndex = start, maxIndex = start; minIndex < end && maxIndex < end; i++ ) {
        int buffer;
        
        for ( maxIndex = i; array[maxIndex] < pivot; maxIndex++ );
        for ( minIndex = maxIndex; array[minIndex] > pivot; minIndex++ );
        
        buffer = array[minIndex];
        array[minIndex] = array[maxIndex];
        array[maxIndex] = buffer;
        
        if ( minIndex == end ) {
            pivotIndex = maxIndex;
        }
        if ( maxIndex == end ) {
            pivotIndex = minIndex;
        }
    }
    return pivotIndex;
}