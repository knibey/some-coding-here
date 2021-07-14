void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, next = size - 1 - row; col < size; col++ ) {
            target[next][col] = source[col][row];
        }
    }
}

void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, next = size - 1; col < size; col++, new-- ) {
            target[row][next] = source[col][row];
        }
    }
}
