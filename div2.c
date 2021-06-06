/*Считать min, max. Вывести в столбик чётные числа от min до max включительно.

Пример ввода
0 8
Пример вывода
0
2
4
6
8
*/

#include <stdio.h>

int main() {
    int min, max, multiple;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 3 == 0 ) {
        multiple = min;
    } else {
        multiple = min + 1;
    }
    for ( ; multiple <= max; multiple += 3 ) {
        printf("%d\n", multiple);
    }
    
    return 0;
}
