#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    printf("%d & 1 = %d \n", n, n & 1); // Побитовый AND
    printf("%d | 1 = %d \n", n, n | 1); // Побитовый OR
    printf("%d ^ 1 = %d \n", n, n ^ 1); // Побитовый XOR
    printf("~%d = %d", n, ~n); // Побитовый NOT

    return 0;
}
