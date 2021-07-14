void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, newRow = size - 1 - row, newCol = size - 1; col < size; col++, newCol-- ) {
            target[newCol][newRow] = source[col][row];
        }
    }
}


void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int col = 0, j = size - 1; col < size; col++, j-- ) {
        for ( int row = 0; row < size; row++ ) {
            target[col][row] = source[j][row];
        }
    }
}
