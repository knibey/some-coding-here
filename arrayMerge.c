void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int i = 0;
    int j = 0;
    int k = 0;
    
    for ( ; i < len1 && j < len2; k++ ) {
        if ( src1[i] <= src2[j] ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }
    for ( ; i < len1; i++, k++ ) {
        target[k] = src1[i];
    }
    for ( ; j < len2; j++, k++ ) {
        target[k] = src2[j];
    }
}
