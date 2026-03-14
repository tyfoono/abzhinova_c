#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("before: a = %d, b = %d \n\n", a, b);

    a += b;
    b = a - b;
    a -= b;

    printf("after: a = %d, b = %d \n\n", a, b);

    return 0;
}
