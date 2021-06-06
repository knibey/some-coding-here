/*
В файле task.in дана длина последовательности чисел (число больше нуля) и сама последовательность.
Прочитать последовательность в массив.
Найти все отрицательные числа и заменить их положительными, равными по модулю.
Результирующий массив вывести в task.out.
*/

#include <stdio.h>

void plusMinus(int array[], int length) {
    for ( int i = 0; i < length; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}

int lengthScan(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    return number;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = lengthScan(in);
    int array[size];
    int last = size - 1;
    
    for ( int i = 0; i < size; i++ ) {
        array[i] = lengthScan(in);
    }
    
    plusMinus(array, size);
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
    
    return 0;
}
