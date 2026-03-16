#include <stdio.h>

int main() {

    int n, mult = 1;
    scanf("%d", &n);

    for(int i = 3; i <= n; i += 3) { mult *= i; }

    printf("%d", mult);

    return 0;
}
