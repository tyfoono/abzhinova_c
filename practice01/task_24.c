#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%.1f", (a + b)*c/2.0);

    return 0;
}
