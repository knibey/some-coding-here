#include <stdio.h>
#include <stdlib.h>
 
int main() {
    unsigned i, n;
    int* a;
    scanf("%u", &n);
    a = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", a + i);
    a[0] += a[n - 1];
    a[n - 1] = a[0] - a[n - 1];
    a[0] -= a[n - 1];
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    free(a);
}