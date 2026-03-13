#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);
    printf("hundreds = %d \ntens = %d\nones = %d", a / 100, a % 100 / 10, a % 10);

    return 0;
}
