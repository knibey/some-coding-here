int arraySum(int array[], int size) {
    int sum = 0;
    
    for ( int i = 0; i < size; i++ ) {
        array[i] = i + sum;
    }
    
    return sum;
}
