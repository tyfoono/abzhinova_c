#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a + b == c) { printf("%d + %d = %d => магическая тройка", a, b, c); }
    else { printf("%d + %d != %d => не магическая тройка", a, b, c); }

}
