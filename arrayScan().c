/*
Считать из файла in не более limit элементов в массив array.
Вернуть количество считанных элементов.
*/

int arrayScan(FILE *in, int array[], int limit) {
    int quantity = 0;
    
    for ( ; quantity < limit && fscanf(in, "%d", &array[quantity]) == 1; quantity++ );
    return quantity;
}
