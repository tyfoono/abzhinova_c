#include <stdio.h>

int main() {

    int n, count = 1;
    scanf("%d", &n);

    for(int i = 1; i*i <= n; i++) {
        if (n % i == 0) count++;
    }

    (count == 2) ? printf("prime")
            : printf("not prime");

    return 0;
}
